var View = Factory.GetTestView("MyView");
View.CreateView();
View.FinishedLoadingSignal.connect(function () {
  var txt = View.GetContentAsText();
  if (txt.indexOf("Some String I am Looking for") != -1) {
    print("yay");
  } else {
    print("nay);
  }
});
View.Load("http://mysite.com");

