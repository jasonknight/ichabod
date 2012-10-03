# Ichabod

Ichabod is a multi-headless-browser simulator built on Webkit. It allows you to create **as many** headless browsers as you like, visit pages,
execute arbitrary JavaScript in each webView, and produce connection stats.

## Usage

Download the git repo, and make sure to have qt dev tools installed. The easiest way to do this is to install qtcreator.

qmake && make

./ichabod my_qtscript_file.js

Look at test.js for examples. The max simultaneous browsers I have tested this with is 200.

Each browser has Caching, Local databse, and Cookies which you can turn on or off on a per webView basis.


```javascript
var View = Factory.GetTestView("MyView");
View.CreateView();
View.FinishedLoadingSignal.connect(function (name_of_view) {
  var txt = View.GetContentAsText();
  if (txt.indexOf("Some String I am Looking for") != -1) {
    print("yay");
  } else {
    print("nay");
  }
});
View.Load("http://mysite.com");
```

You can turn some options on/off

```javascript
var View = Factory.GetTestView("MyView");
View.SetAttribute("name|cache|db|cookies","on|off");
// Then call CreateView...
View.CreateView();
```

You probably want to create a crap load of views, and connect them up to a FinishedLoadingSignal, so the name of the View is the key

```javascript

var views = {};

function myHandler(name) {
  print(name + " has finished loading");
  views[name].Load("another url");
}

for (var i = 0; i < 20; i++) {
  var view_name = "View" + i;
  views[view_name] = Factory.GetTestView("MyView");
  views[view_name].CreateView();
  views[view_name].FinishedLoadingSignal.connect(myHandler);
  views[view_name].Load("starting url");
}
```

Each view will have it's own log file in ./logs which is named after its name. If you want a combined log file, you can name them all the same. But then you couldn't differentiate. Plans are in place to change this behavior.