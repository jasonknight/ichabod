var hessian = new Hessian("Hessian Example");
print("Available methods on the hessian");
for (var key in hessian) {
  if (key.indexOf("p_") == -1) {
    print("hessian." + key + ": " + env.getType(hessian[key]) );
  }
}
function firstLoad () {
  print("Hey, I finished loading, but I should only do this once!");
  setTimeout(function () {
    //Change the userAgent navigator variable to mimic and iPhone
    hessian.getPage().SetUserAgent("Mozilla/5.0 (iPhone; CPU iPhone OS 5_1 like Mac OS X) AppleWebKit/534.46 (KHTML, like Gecko) Version/5.1 Mobile/9B179 Safari/7534.48.3");
    hessian.load("examples/index.html");
  },2000);
  hessian.finishedLoadingSignal.disconnect(firstLoad);
  hessian.finishedLoadingSignal.connect(changeSize);
}
function changeSize() {
  origin = window().geometry; //This is the screen we are on
  new_geometry = {x: origin.x + 20, y: origin.y + 20, width: 400, height: 600}; // we pass in an object with ALL Values!!!
  hessian.setGeometry(new_geometry);
  hessian.finishedLoadingSignal.disconnect(changeSize);
}
print(hessian.getContent()); // will do nothing.
hessian.createView(); // Acctually created the backend elements;

hessian.show(); // shows the normally headless view
// You can connect to some signals from the Hessian
hessian.finishedLoadingSignal.connect(firstLoad);
// You can drill down to the page level
hessian.getView().loadFinished.connect(function (t) {
  print("Hey, I can do this on the view as well!");
});
// You can drill down to the MainFrame as well
hessian.getPage().GetMainFrame().javaScriptWindowObjectCleared.connect(function () {
  print("JS Object has been cleared...maybe I should do something here?");
});
hessian.load("examples/index.html"); // loads a page

// But it's easier to get them directly
var iphone = iPhone5();
iphone.load("examples/index.html");
iphone.finishedLoadingSignal.connect(function () {
  // We can position hessians on the screen so organize them
  //iphone.center();
  //iphone.topLeft();
  //iphone.topRight();
  //iphone.bottomRight();
  iphone.bottomLeft();
});
