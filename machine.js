env.sendText = function (target,text) {
  var parts = text.split("");
  try {
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
var Machine = function (name) {
  var self = this; // so we can refer to this inside of functions, without confusion
  this.possible_states = ["STARTING","LOGIN","USERNAME","LOGINSENT","LOGGEDIN","DONE"]; // this is more for documentation than anything.
  this.state = this.possible_states[0];
  this.process = function () {
    print("State is: " + self.state + "\n");
    if (self.state == "STARTING") {
      self.view = Factory.GetTestView(name);
      self.view.CreateView();
      self.view.Show();
      self.state = "LOGIN";
    } else if (self.state == "LOGIN") {
      self.view.Load("http://localhost:3000");
      self.state = "USERNAME";
    } else if (self.state == "USERNAME") {
      if (self.view.GetContent().indexOf("employees/login") != -1) {
        sendText(self.view,"110");
        sendKey(self.view,"Enter");
        self.state = "LOGINSENT";
      }
    } else if (self.state == "LOGINSENT") {
      if (self.view.GetContent().indexOf("TestVendor en-US") != -1) {
        self.state = "LOGGEDIN";
      }
    } else if (self.state == "LOGGEDIN") {
      print("Yay, we are now logged in and can do stuff\n");
      exit();
    }
  }
}

var test = new Machine("TestLogin");
setInterval(test.process,350);