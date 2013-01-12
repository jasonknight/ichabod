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
var Test = function (description,name, show) {
  var self = this;
  this.view = Factory.GetTestView(name);
  this.view.CreateView();
  if (show) {
    this.view.Show();
  }
  this.callbacks = {};
  this.description = description;
  this.destinations = [];
  this.destination = '';
  this.visit = function (destination) {
    this.destination = destination;
    self.destinations.push(destination);
    return self;
  }
  this.then = function (callback) {
    if (!this.callbacks[this.destination]) {
      this.callbacks[this.destination] = [];
    }
    this.callbacks[this.destination].push(callback);
    return self;
  }
  this.done = function () {
    this.view.FinishedLoadingSignal.connect(this.finishedLoading);
    this.view.Load(this.destinations[0]);
  }
  this.finishedLoading = function () {
    var lp = self.view.lastLoadedPath;
    for (var i = 0; i < self.destinations.length; i++) {
      var dest = self.destinations[i];
      if (dest == lp) {
        for (var j = 0; j < self.callbacks[lp].length;j++) {
          var cb = self.callbacks[lp][j];
          cb.call(self.view);
        }
        self.destinations[i] = self.destinations[i] + ' COMPLETE';
        if (self.destinations[i+1]) {
          var dest = self.destinations[i+1];
          var func = function () { self.view.Load(dest); };
          setTimeout(func,200);
        }
        return;
      }
    }
  }
}
var content = function (view) {
  var self = this;
  this.view = view;
  this._content = view.GetContent();
  this._type = "View";
  this.should_contain = function (text) {
    if (self._content.indexOf(text) == -1) {
      TestFailure(self._type + " should contain [[ " + text + " ]]");
      exit();
    } else {
      print("TestSuccess: "+self._type +" should contain [[ " + text + " ]]");
    }
    return self;
  }
  this.should_not_contain = function (text) {
    if (self._content.indexOf(text) != -1) {
      TestFailure(self._type + " should NOT contain [[ " + text + " ]]");
      exit();
    } else {
      print("TestSuccess: "+self._type +" should NOT contain [[ " + text + " ]]");
    }
    return self;
  }
  this.of = function (id) {
    self._type = "Element["+id+"]";
    self._content = self.view.GetContentOfElement(id);
    return self;
  }
  this.and = function (id) {
    self._type = "Element["+id+"]";
    self._content = self.view.GetContentOfElement(id);
    return self;
  }
}




new Test("Test Login Feature","LoginTest",false)
  .visit("http://localhost:3000/")
  .then(function () {
    this.Show();
  })
  .then(function () {
    this.Fill("#code","swordfish");
    this.MouseDown("#login_button");
  })
  .visit("http://localhost:3000/orders/new?vendor_id=1&cash_register_id=1")
  .then(function () {
    sendText(this,"CHEAP");
    sendKey(this,"Enter");
    this.MouseDown("#print_receipt_button");
    var v = this;
    setTimeout(function () {
      new content(v).of("#pos_order_total").should_not_contain("$0.00");
      v.MouseDown("#confirm_complete_order_button");
      setTimeout(function () {
        v.MouseDown("#cancel_complete_order_button");
        new content(v).of("#pos_order_total").should_contain("$0.00");
        exit();
      },1000);
    },500);
  })
  .done();

  

