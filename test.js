var Views = {};

for (var i = 0; i < 150; i++) {
  var view_name = "MyView" + i;
  var View = Factory.GetTestView(view_name);
  View.CreateView();
  
  Views[view_name] = View;
  Views[view_name].FinishedLoadingSignal.connect(function (name) {
    print(name + " Has finished loading");
  });
  Views[view_name].Load("http://localhost:3000");
}
