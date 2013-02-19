var files = IO.dir("./doc");
for (var i = 0; i < files.length; i++) {
  print(files[i].name);
}
exit();