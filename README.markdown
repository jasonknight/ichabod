# Ichabod

Ichabod is a multi-headless-browser simulator built on Webkit. It allows you to create **as many** headless browsers as you like, visit pages,
execute arbitrary JavaScript in each webView, and produce connection stats.

## Usage

Download the git repo, and make sure to have qt dev tools installed. The easiest way to do this is to install qtcreator.

qmake && make

./ichabod my_qtscript_file.js

Look at test.js for examples. The max simultaneous browsers I have tested this with is 200.

Each browser has Caching, Local databse, and Cookies which you can turn on or off on a per webView basis.
