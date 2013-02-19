env.modules = {};
env.getType = function (obj) {
  if (obj.constructor == String) {
    return "String";
  } else if (obj.constructor == Array) {
    return "Array";
  } else if (obj.constructor == Function) {
    return "Function";
  } else if (obj.constructor == Number) {
    return "Number";
  } else if (obj.constructor == Object) {
    return "Object";
  } else if (obj.constructor == Boolean) {
    return "Boolean";
  } else {
    return (typeof obj);
  } 
}
env.dump = function (object,depth) {
  if (!depth)
    depth = 0;
  var pad = '';
  for (var i = 0; i < depth; i++) {
    pad += "\t"
  }
  var text = pad + "{\n";
  for (var key in object) {
    if (typeof object[key] == 'object') {
      text += pad + "\t" + key + "(" + (typeof object[key]) + "): " + dump(object[key],depth + 1);
    } else {
      var value = object[key] + '';
      text += pad + "\t" + key + "(" + (typeof object[key]) + "): '" + value.replace("\n","\n" + pad) + "'\n";
    }
  }
  text += pad + "}\n";
  return text;
}