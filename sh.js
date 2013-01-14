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



var Machine = function (name) {
  var machine = this;
  machine.jobid = 0;
  machine.content = null;
  machine.state = 0;
  machine.statename = "";
  machine.interval = 900;

  
  machine.kick_off_test = function () {
    var states = ["",
                  "LOGIN_VISIT",
                  "LOGIN_SUBMIT",
                  "WAIT_FOR_TABLES_VIEW"
                 ]
    machine.statename = states[machine.state];
    print("Current State: " + machine.state + ' ' + machine.statename);
    
    if (machine.statename == "") {
      machine.view = Factory.GetTestView(name);
      machine.view.CreateView();
      machine.view.Show();
      machine.content = new Content(machine.view);
      machine.state++;
      
    } else if (machine.statename == "LOGIN_VISIT") {
      machine.view.Load("http://localhost:3000");
      machine.state++;
      
    } else if (machine.statename == "LOGIN_SUBMIT") {
      if (machine.content.has("SalorHospitality Login") != -1) {
        sendText(machine.view,"000");
        sendKey(machine.view,"Enter");
        machine.state++;
      } else {
        print("Waiting for content to have 'SalorHospitality Login'");
      }
      
    } else if (machine.statename == "WAIT_FOR_TABLES_VIEW") {
      if (machine.content.has("<div id='tables'></div>") != -1) {
        clearInterval(machine.jobid);
        machine.state = 0;
        machine.jobid = setInterval(machine.sell_simple_article, machine.interval);
      } else {
        print("Waiting for content to have <div id='tables'></div>");
      }
    }
  }
  
  machine.sell_simple_article = function () {
    var states = ["",
                  "ON_TABLE_VIEW",
                  "ADD_ARTICLE",
                  "SUBMIT_ORDER"
                 ]
    machine.statename = states[machine.state];
    print("Current State: " + machine.state + ' ' + machine.statename);
    
    if (machine.statename == "") {
      var table_id = Math.floor((Math.random()*5)+1);
      //table_id = 1;
      machine.view.MouseDown("#table" + table_id);
      machine.state++;
    } else if (machine.statename == "ON_TABLE_VIEW") {
      var category_id = Math.floor((Math.random()*5)+1);
      //category_id = 1;
      machine.view.MouseDown("#category_" + category_id);
      machine.state++;
    } else if (machine.statename == "ADD_ARTICLE") {
      machine.view.Click("#article_1");
      //machine.view.ExecuteJS("");
      machine.state++;
    } else if (machine.statename == "SUBMIT_ORDER" ) {
      machine.view.Click("#order_submit_button");
      //clearInterval(machine.jobid);
      machine.state = 0; // loop forever
    }
  }
}

/* ============================================ */
/* ==========  HELPER FUNCTIONS =============== */
/* ============================================ */
var machine = new Machine("SalorHospitality");
machine.jobid = setInterval(machine.kick_off_test, machine.interval);