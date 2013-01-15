var view = Factory.GetTestView();
view.CreateView();
view.Show();
view.Load("http://localhost:3000");
view.FinishedLoadingSignal.connect(function (str) {
  print("Finished Loading");
  var el = view.GetElement("#cash_drop");
  print(dump(el));
  var el2 = view.GetElement("#cash_drop",["background-color", "display"]);
  print(dump(el2));
  
  var el3 = view.GetElement("#this_element_doesn't_exist",["background-color", "display"]);
  print(dump(el3));
});