print("Executing include example");
include("examples/object.js");
print(typeof env.modules.ichabod.obj);

var myobject = env.modules.ichabod.obj;
print(myobject);
exit();