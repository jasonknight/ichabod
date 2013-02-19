var view = Factory.GetTestView();
view.CreateView();
view.Show();
view.Load("examples/index.html");
view.FinishedLoadingSignal.connect(function (str) {
  var el = view.GetElement("#main");
  print(dump(el));
});
exit();