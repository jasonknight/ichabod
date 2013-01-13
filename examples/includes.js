print("Executing include example");
include("examples/object.js");
print(typeof env.modules.obj);

var myobject = env.modules.obj;
print(myobject);