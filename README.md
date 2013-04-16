# Ichabod


Ichabod is a multi-headless-browser simulator built on Webkit. It allows you to create **as many** headless browsers as you like, visit pages,
execute arbitrary JavaScript in each webView, and in the future, hopefully produce meaningful usage statistics.

Ichabod sports as full a browser (based on webkit) that I could manage, this includes file downloads, cookies,
HTML localstorage and local sqlite database support.

## Raison d'etre

The reason I created Ichabod was because I felt that testing frameworks like rspec, and tools like capybara
were in and of themselves too brittle and too tightly connected to the development environment to be
really useful for request testing (I still consider rspec, or other testing frameworks essential for the model
layer of an application).

I found that my tests were often failing, or not performing as i'd like due to changes in the actual code base
of the framework (for instance all of my request specs suddenly started to fail for no apparent reason because of
a javascript error that is only present in the capybara webkit browser, not in any others) in some cases, there
were work around, or I could split up tasks between selenium, or capybara webkit, but since the software that
I was developing was a thin client over a SaaS that ships with a custom webkit browser, I wanted to emulate, as
close as possible the actual client browser.

The other problem I faced was that I needed to test a complex system against errors that only crop up during heavy
usage by multiple clients simultaneously, or in quick succession.

Ichabod is an attempt, to address these main issues:

* You should be able to test your application under load (in ichabod you can create thousands of headless browsers, though
I have only tested it with about 200, there were no performance problems on my monster desktop)
* Your request specs should be pure black box testing, you whould be able to test what the user SEES.
* You should be able to simulate complex actions, keypresses and mouse clicks (up, down, click, drag etc)
* You shoudld be able to design your tests your way, and simply have access to a good API for interacting with the browser.

Ichabod solves some of these issues now, but not all of them yet. Soon, I hope to add in support for directly sending
XEvents to the browsers.

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
  views[view_name] = Factory.GetTestView(view_name);
  views[view_name].CreateView();
  views[view_name].FinishedLoadingSignal.connect(myHandler);
  views[view_name].Load("starting url");
}
```

Each view will have it's own log file in ./logs which is named after its name. If you want a combined log file, you can name them all the same. But then you couldn't differentiate. Plans are in place to change this behavior.

## More complex behavior

Implementing a test of the browser as a state machine is probably the best way to go. machine.js is an example of this.
