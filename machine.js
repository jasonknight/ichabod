print("beginning of script");
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
print("sendText defined");
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
print("content defined");
/* Above this are some helper functions */

var Machine = function (name) {
  var self = this; // so we can refer to this inside of functions, without confusion
  this.possible_states = ["STARTING",
                          "LOGIN",
                          "USERNAME",
                          "LOGINSENT",
                          "LOGGEDIN",
                          "VISITORDERS",
                          "SENDSKU",
                          "COMPLETEORDER"
  ]; // this is more for documentation than anything.
  this.state = this.possible_states[0];
  this.jobid = 0;
  this.content = null;
  this.login_process = function () {
    print("Logging In: " + self.state + "\n");
    if (self.state == "STARTING") {
      self.view = Factory.GetTestView(name);
      self.view.CreateView();
      self.view.Show();
      self.content = new Content(self.view);
      self.state = "LOGIN";
    } else if (self.state == "LOGIN") {
      self.view.Load("http://localhost:3000");
      self.state = "USERNAME";
    } else if (self.state == "USERNAME") {
      if (self.content.has("employees/login") != -1) {
        sendText(self.view,"111");
        sendKey(self.view,"Enter");
        self.state = "LOGINSENT";
      } else if (self.content.has("TestVendor en-US") != -1) {
        self.state = "LOGGEDIN";
      }
    } else if (self.state == "LOGINSENT") {
      if (self.view.GetContent().indexOf("TestVendor en-US") != -1) {
        self.state = "LOGGEDIN";
      }
    } else if (self.state == "LOGGEDIN") {
      print("Yay, we are now logged in and can do stuff\n");
      clearInterval(self.jobid);
      self.state = "VISITORDERS";
      // now we move on to a new process.
      self.jobid = setInterval(self.make_order_process,350);
    }
  } // end login process
  
  this.make_order_process = function () {
    print("Making Order: " + self.state);
    if (self.state == "VISITORDERS") {
      self.view.Load("http://localhost:3000/orders/new?vendor_id=1&cash_register_id=1");
      self.state = "SENDSKU";
    } else if (self.state == "SENDSKU") {
      print("testing");
      if (self.content.has("pos_order_total")) {
        sendText(self.view,"123");
        sendKey(self.view,"Enter");
        self.state = "COMPLETEORDER";
      }
    } else if (self.state == "COMPLETEORDER" && self.content.has("dummy item")) {
      self.view.MouseDown("#print_receipt_button");
      self.state = "COMPLETEORDER2";
    } else if (self.state == "COMPLETEORDER2" && self.content.has('<span id="complete_order_total" class="complete-order-total">$15.00</span>')) {
      self.view.MouseDown("#confirm_complete_order_button");
      self.state = "COMPLETEORDER3";
    } else if (self.state == "COMPLETEORDER3" && self.content.has('klass="Order" field="total">$0.00</div>')) {
      self.view.MouseDown("#cancel_complete_order_button");
      self.state = "DONE";
      clearInterval(self.jobid);
    }
  }
}
print("Machine defined");
var test = new Machine("TestLogin");
test.jobid = setInterval(test.login_process,350);