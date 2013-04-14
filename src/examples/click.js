var view = Factory.GetTestView();
view.CreateView();
view.Show();
view.Load("http://localhost:3000");
view.FinishedLoadingSignal.connect(function (str) {
  print("Finished Loading");
  var el = view.GetElement("#header_cash_drop");
  print(dump(el));
  view.MouseDown(el);
});