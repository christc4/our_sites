# Disect

<object data=txt/shebang.txt width=130 height=45></object>

This is our scripts shebang. 

Awk's '-f' flag as per the man page...

- f progfile
	- Read program code from the specified file progfile instead of from the command line.

Awk can be used directly within the command line for small one-liners but for larger complex scripts it's more practical to write awk in a file

<object data=txt/func_eschtml.txt width=280 height=100></object>

The function 'eschtml' escapes HTML special characters, using gsub() to replace all occurences of ampersands and less than signs with their respective html entities.

> ampersands denote the beginning of an _entity_, 

> less than signs define the start of HTML tags

*Note*: browsers encountering an unescaped ampersand could mistakenly treat proceeding text as an HTML entity, causing unintended rendering issues. Likewise unescaped less than signs are treated as the start of HTML elements/tags
