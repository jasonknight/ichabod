var view = Factory.GetTestView();
view.CreateView();
view.Show();
view.Load("http://localhost:3000");
view.FinishedLoadingSignal.connect(function (str) {
  view.ExecuteJS("$('#cash_drop').show();");
  var ret = view.ExecuteJS("$('#cash_drop').offset();");
  print(dump(ret));
});