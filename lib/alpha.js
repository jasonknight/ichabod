env.modules = {};
env.getType = function (v) {
  if (v instanceof Array) {
    return "Array";
  } else if (v instanceof String) {
    return "String";
  } else {
    return (typeof v);
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
      text += pad + "\t" + key + "(" + (typeof object[key]) + "): " + object[key] + "\n";
    }
  }
  text += pad + "}\n";
  return text;
}