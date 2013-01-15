/* ============================================ */
/* ==========  HELPER FUNCTIONS =============== */
/* ============================================ */
env.sendText = function (target,text) {
  try {
    var parts = text.split("");
    for (var i = 0; i < parts.length; i++) {
      KeyPress(target,parts[i]);
      KeyRelease(target,parts[i]);
    }
  } catch (err) {
    print("Send error: " + err);
  }
}

env.sendKey = function (target,key) {
  KeyPress(target,key);
  KeyRelease(target,key);
}

var Content = function (view) {
  var self = this;
  this.view = view;
  this.has = function (text) {
    return (self.view.GetContent().indexOf(text) != -1);
  }
  this.of = function (id) {
    self._type = "Element["+id+"]";
    self._content = self.view.GetContentOfElement(id);
    return self;
  }
}

function test_spool() {
  clearInterval(machine.current_interval_id);
  if (machine.current_test_index < machine.tests.length) {
    machine.current_test = machine.tests[machine.current_test_index];
    print("\n\n=========== ENTERING TEST ==============");
    machine.state = 0;
    machine.current_interval_id = setInterval(machine.current_test, machine.interval);
    machine.current_test_index++;
  } else {
    print("\n\n DONE!");
  }
}


/* ================================================= */
/* ==========  TESTING STATE MACHINE =============== */
/* ================================================= */
var Machine = function (name) {
  var machine = this;
  machine.content = null;
  machine.state = 0;
  machine.statename = "";
  machine.interval = 900;

  machine.current_interval_id = null;
  machine.current_test = null;
  machine.current_test_index = 0;

  //================  TEST  ====================
  machine.run_login = function(url) {
    var states = ["",
                  "LOGIN_VISIT",
                  "LOGIN_SUBMIT",
                  "WAIT_FOR_TABLES_VIEW"
                 ]
    machine.statename = states[machine.state];
    print("## run_login:" + machine.state + ':' + machine.statename);
    
    //------------ STATE -----------------------
    if (machine.statename == "") {
      machine.view = Factory.GetTestView(name);
      machine.view.CreateView();
      machine.view.Show();
      machine.content = new Content(machine.view);
      machine.state++;
    //------------ STATE -----------------------
    } else if (machine.statename == "LOGIN_VISIT") {
      machine.view.Load(url);
      machine.state++;
    //------------ STATE -----------------------
    } else if (machine.statename == "LOGIN_SUBMIT") {
      if (machine.content.has("SalorHospitality Login") != -1) {
        sendText(machine.view,"000");
        sendKey(machine.view,"Enter");
        machine.state++;
      } else {
        print("Waiting for page load.");
      }
    //------------ STATE -----------------------
    } else if (machine.statename == "WAIT_FOR_TABLES_VIEW") {
      if (machine.content.has("<div id='tables'></div>") != -1) {
        test_spool();
      } else {
        print("Waiting for page load.");
      }
    }
  }
  
  //================  TEST  ====================
  machine.run_order_one_article = function() {
    var states = ["",
                  "ON_TABLE_VIEW",
                  "ADD_ARTICLE",
                  "SUBMIT_ORDER"
                 ]
    machine.statename = states[machine.state];
    print("## run_order_one_article:" + machine.state + ':' + machine.statename);
    if (machine.statename == "") {
      machine.view.Click(".table");
      machine.state++;
    } else {
      test_spool();
    }
  }
  
  //================  TEST  ====================
  machine.run_performance = function() {
    var states = ["",
                  "ON_TABLE_VIEW",
                  "ADD_ARTICLE",
                  "SUBMIT_ORDER"
                 ]
    machine.statename = states[machine.state];
    print("## run_performance:" + machine.state + ':' + machine.statename);
    //------------ STATE -----------------------
    if (machine.statename == "") {
      var count_tables = machine.view.ExecuteJS("$('.table').size();");
      var selected_table_index = Math.floor((Math.random() * count_tables));
      machine.view.ExecuteJS("$($('.table')[" + selected_table_index + "]).mousedown();");
      machine.state++;
    //------------ STATE -----------------------
    } else if (machine.statename == "ON_TABLE_VIEW") {
      var count_categories = machine.view.ExecuteJS("$('.category').size();");
      var selected_category_index = Math.floor((Math.random() * count_categories));
      var category_button_id = machine.view.ExecuteJS("$($('.category')[" + selected_category_index + "]).attr('id');");
      if (category_button_id == "customers_category_button") {
        // print("No test yet for customer adding");
        // re-execute this state
      } else {
        machine.view.ExecuteJS("$($('.category')[" + selected_category_index + "]).mousedown();");
        machine.state++;
      }
    //------------ STATE -----------------------
    } else if (machine.statename == "ADD_ARTICLE") {     
      var count_articles = machine.view.ExecuteJS("$('.article').size();");
      var selected_article_index = Math.floor((Math.random() * count_articles));
      machine.view.ExecuteJS("$($('.article')[" + selected_article_index + "]).click();");
 
      var quantities_popup = machine.view.GetElement('.quantities');
      if (quantities_popup.css.display != 'none') {
        var count_quantities = machine.view.ExecuteJS("$('.quantity').size();");
        var selected_quantity_index = Math.floor((Math.random() * count_quantities));
        setTimeout(function(){
          machine.view.ExecuteJS("$($('.quantity')[" + selected_article_index + "]).click();");
        }, 200);
      } else {
      }
      machine.state++;
    //------------ STATE -----------------------
    } else if (machine.statename == "SUBMIT_ORDER" ) {
      setTimeout(function(){
        machine.view.Click("#order_submit_button");
      }, 200);
      machine.state = 0; // loop this test forever
    }
  }
}

/* ============================================ */
/* ==========    MAIN PROGRAM   =============== */
/* ============================================ */



var machine = new Machine("SalorHospitality");

machine.tests = [function() { machine.run_login('http://localhost:3000') },
                 machine.run_order_one_article
                ];

test_spool(); // process all tests as defined and ordered in machine.tests