/* ============================================ */
/* ==========  HELPER FUNCTIONS =============== */
/* ============================================ */
function test_spool() {
  print("\n\n");
  print("Clearing current_interval_id ", machine.current_interval_id);
  clearInterval(machine.current_interval_id);
  if (machine.current_test_index < machine.tests.length) {
    machine.current_test = machine.tests[machine.current_test_index];
    print("\=========== ENTERING TEST ==============");
    machine.state = 0;
    machine.current_interval_id = setInterval(machine.current_test, machine.interval);
    machine.current_test_index++;
  } else {
    print("\n\n DONE!");
    exit(0);
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
  machine.interval = 1200;

  machine.current_interval_id = null;
  machine.current_test = null;
  machine.current_test_index = 0;
  
  machine.counter1 = 0;
  machine.counter2 = 0;
  machine.counter3 = 0;


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
      if (machine.content.has("SalorHospitality Login")) {
        sendText(machine.view,"000");
        sendKey(machine.view,"Enter");
        machine.state++;
      } else {
        print("Waiting for page load.");
      }
    //------------ STATE -----------------------
    } else if (machine.statename == "WAIT_FOR_TABLES_VIEW") {
      if (machine.content.has("<div id='tables'></div>")) {
        machine.advance_spool();
      } else {
        print("Waiting for page load.");
      }
    }
  }
  
  //================  TEST  ====================
  // This submits an empty order form.
  machine.run_submit_empty_table = function() {
    var states = ["GO_TO_TABLES",
                  "GO_TO_ORDER_FORM",
                  "SUBMIT_ORDER",
                 ]
    machine.statename = states[machine.state];
    print("## run_submit_empty_table:" + machine.state + ':' + machine.statename);
    if (machine.statename == "GO_TO_TABLES") {
      machine.view.ExecuteJS("route('tables');");
      machine.state++;
    } else if (machine.statename == "GO_TO_ORDER_FORM") {
      machine.view.MouseDown("#table1");
      machine.state++;
    } else if (machine.statename == "SUBMIT_ORDER") {
      machine.view.Click("#order_submit_button");
      machine.advance_spool();
    }
  }
  
  
  //================  TEST  ====================
  // This finishes an empty order form immediately
  machine.run_finish_empty_table = function() {
    var states = ["GO_TO_TABLES",
                  "GO_TO_ORDER_FORM",
                  "FINISH_ORDER",
                 ]
    machine.statename = states[machine.state];
    print("## run_finish_empty_table:" + machine.state + ':' + machine.statename);
    if (machine.statename == "GO_TO_TABLES") {
      machine.view.ExecuteJS("route('tables');");
      machine.state++;
    } else if (machine.statename == "GO_TO_ORDER_FORM") {
      machine.view.MouseDown("#table1");
      machine.state++;
    } else if (machine.statename == "FINISH_ORDER") {
      machine.view.Click(".finish_button");
      machine.advance_spool();
    }
  }
  
  //================  TEST  ====================
  machine.run_order_article = function() {
    var states = ["GO_TO_TABLES",
                  "GO_TO_TABLE",
                  "HAS_ORDER_INFO",
                  "CLICK_CATEGORY",
                  "ADD_ARTICLE",
                  "SUBMIT_ORDER"
                 ]
    machine.statename = states[machine.state];
    print("## run_order_article:" + machine.state + ':' + machine.statename);
    if (machine.statename == "GO_TO_TABLES") {
      machine.view.ExecuteJS("route('tables');");
      machine.state++;
    } else if (machine.statename == "GO_TO_TABLE") {
      machine.view.MouseDown("#table1");
      machine.state++;
    //------------ STATE -----------------------
    } else if (machine.statename == "HAS_ORDER_INFO") {
      var order_info_html = machine.view.ExecuteJS("$('#order_info').html();");
      if ((order_info_html.indexOf("Order #") == 0) || (order_info_html.indexOf("New order") == 0)) {
        machine.state++;
      }
    //------------ STATE -----------------------
    } else if (machine.statename == "CLICK_CATEGORY") {
      machine.view.ExecuteJS("$($('.category')[0]).mousedown();");
      machine.state++;
    //------------ STATE -----------------------
    } else if (machine.statename == "ADD_ARTICLE") {
      machine.view.ExecuteJS("$($('.article')[0]).click();");
      machine.state++;
        //------------ STATE -----------------------
    } else if (machine.statename == "SUBMIT_ORDER") {
      machine.view.Click("#order_submit_button");
      machine.advance_spool();
    }
  }
  
  //================  TEST  ====================
  machine.run_finish_order = function() {
    var states = ["",
                  "CLICK_ORDER_INVOICE_BUTTON",
                  "CLICK_ORDER_FINISH_BUTTON",
                  "DONE"
                 ];
    machine.statename = states[machine.state];
    print("## run_finish_one_order:" + machine.state + ':' + machine.statename);
    if (machine.statename == "") {
      machine.view.MouseDown("#table1");
      machine.state++;
    //------------ STATE -----------------------
    } else if (machine.statename == "CLICK_ORDER_INVOICE_BUTTON") {
      //machine.view.ExecuteJS("$('#order_invoice_button').click();");
      machine.view.Click("#order_invoice_button");
      machine.state++;
    //------------ STATE -----------------------
    } else if (machine.statename == "CLICK_ORDER_FINISH_BUTTON") {
      if ( machine.view.GetElement('#invoices').css.display == 'block') {
        setTimeout(function(){
          machine.view.ExecuteJS("$('#invoices a.finish_button').click();");
        }, 1000);
        //machine.view.Click(".finish_button");
        machine.state++;
      } else {
        print("Waiting for div#invoice to be shown");
      }
    //------------ STATE -----------------------
    } else if (machine.statename == "DONE") {
      machine.advance_spool();
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
      machine.counter1++;
      var quantities_popup = machine.view.GetElement('.quantities');
      if (!quantities_popup.isNull && quantities_popup.css.display != 'none') {
        var count_quantities = machine.view.ExecuteJS("$('.quantity').size();");
        var selected_quantity_index = Math.floor((Math.random() * count_quantities));
        setTimeout(function(){
          machine.view.ExecuteJS("$($('.quantity')[" + selected_article_index + "]).click();");
        }, 200);
      } else {
      }
      print("XXXXXXXXXXXXXXXXX article count is " + machine.counter1);
      machine.state++;
    //------------ STATE -----------------------
    } else if (machine.statename == "SUBMIT_ORDER" ) {
      setTimeout(function(){
        machine.view.Click("#order_submit_button");
      }, 200);
      machine.state = 0; // loop this test forever
    }
  }
  
  //================  TEST  ====================
  // This is just a placeholder
  machine.run_done = function() {
    var states = ["",
                 ]
    machine.statename = states[machine.state];
    print("## run_done:" + machine.state + ':' + machine.statename);
    if (machine.statename == "") {
      print("DONE!");
      machine.advance_spool();
    }
  }
  
  machine.tests = [function() { machine.run_login('http://localhost:3000') },
                 machine.run_submit_empty_table,
                 machine.run_finish_empty_table,
                 machine.run_order_article,
                 machine.run_finish_order,
                 machine.run_done
                ];
  
  machine.advance_spool = function() {
    print("\n\n");
    print("Clearing current_interval_id ", machine.current_interval_id);
    clearInterval(machine.current_interval_id);
    if (machine.current_test_index < machine.tests.length) {
      machine.current_test = machine.tests[machine.current_test_index];
      print("\=========== ENTERING TEST ==============");
      machine.state = 0;
      machine.current_interval_id = setInterval(function(){
        machine.current_test();
      }, machine.interval);
      machine.current_test_index++;
    } else {
      print("\n\n DONE!");
    }
  }
}



/* ============================================ */
/* ==========    MAIN PROGRAM   =============== */
/* ============================================ */



var machine = new Machine("SalorHospitality");

// this test suite runs fine, wihtout segfaults
// machine.tests = [function() { machine.run_login('http://localhost:3000') },
//                  machine.run_performance
//                 ];

machine.advance_spool(); // process all tests as defined and ordered in machine.tests


/*
 * TESTING MANUAL, TO BE IMPLEMENTED AS AUTOMATIC TESTS
 * 
 * submit empty table
 * finish empty table
 * print and finish empty table
 * 
 * ## ARTICLES, VARIANTS AND OPTIONS
 * take article A, count 1, submit
 * visit occupied table, just submit, check if count 1
 * visit occupied table, add 1 count, submit, check if count 2
 * visit occupied table, add another article B, submit
 * visit occupied table, delete article B, submit
 * visit occupied table, change price, submit
 * visit occupied table, add quantity, submit
 * visit occupied table, increment quantity, add option to quantity, clear option, submit, check that count is 2
 * visit occupied table, increment quantity, add option to quantity, submit
 * visit occupied table, add increment quantity, add different option to quantity, submit
 * visit occupied table, add increment quantity, add 2 options, increase count, check price
 * check comment
 * check scribe
 * delete all order items
 * 
 * ## COUNTER MODE
 * visit empty table, add 1 article, finish immediately
 * visit empty table, add 1 article, finish and print immediately
 * 
 * ## CANCELLING
 * visit empty table, add items, cancel
 * 
 * ## ORDER MOVING
 * table A, add article A, submit
 * table B, add article A, move to table A, check count of 2
 * table B, add article A with option, move to table A, check separateness
 * 
 * 
 * ## USER PRESERVATION WHEN FINISHED VIA INVOICE FORM
 * as owner001, take 2 orders
 * log out and in as superuser
 * go to invoice form and finish
 * check on orders#show ownership of owner001
 * go to order form and finish immediately,
 * check on orders#show ownership of owner001
 * 
 * 
 * ## SPLITTING
 * empty table A, add 10 article A, invoice button
 * split invoice 1 count
 * check split total
 * do split, check that splitting counts are locked
 * check order nr
 * finish newly split order
 * do split
 * finish and print newly split order
 * do split
 * go back to orders view, move to table B
 * check that table A has only 1 invoice
 * go to invoice form of table A
 * do split
 * directly move to table C
 * do split
 * directly move to table C again
 * check that table C has only 1 invoice
 * do split
 * chance cost center of second invoice
 * finish second invoice
 * do split
 * split back
 * add splitting count, finish invoice, check remaining count
 * add splitting count, finish and print invoice, check remaining count
 * 
 * ## PAYMENT METHODS
 * set payment method
 * finish
 * check in orders#show for payment method
 * take order
 * invoice view
 * add 2 payment methods with change money
 * finish
 * check in orders#show
 * 
 * 
 * ## REFUND
 * finish order with 5 items
 * go to refund form
 * separate 1 item
 * refund as cash
 * separate 1 item
 * refund as card
 * check settlements
 * 
 * ## CHECK USER 
 * take order
 * change user
 * check that ordering screen has new user
 * 
 * ## CUSTOMER
 * make order
 * click on customer
 * revisit order form
 * check for customer name
 * 
 * ## ORDER NOTE
 * 
 */
