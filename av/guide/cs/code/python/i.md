<style>#toc{position:fixed;top:20px;right:20px;max-width:200px;padding:10px;overflow-y:auto;max-height:80vh;z-index:1000}</style>

# Python Programming


<div id="toc">
Table of Contents

- [Boolean](#boolean)
- [Class](#class)
- [Dictionary](#dictionary)
- [Functions](#functions)
- [Lambda](#lambda)
- [String](#string)
- [While](#while)
</div>

##  <a name='boolean'>Boolean</a>

Sources used: [Xah Lee](//xahlee.info/python/true_false.html)

True and false are literal values of boolean type

What Value evaluates to True?

In a if statement,

- non-empty things, and number 1, eval to True
- None, zero and empty things eval to False

The following evaluates to False:

- `False`
	- builtin literal expression
- `None`
	- builtin literal expression
- `0`
	- Zero
- `0.0`
	- Zero, float  
- `""`
	- Empty string
- `[]`
	- Empty list
- `()`
	- Empty tuple
- `{}`
	- Empty dictionary
- `set([])`
	- Empty set
- `frozenset([])`
	- Empty frozen set

You can use the function 'bool' to test

<object data=src/bool-test-true-false.txt></object>

##  <a name='class'>Class</a>

Sources: [Xah Lee](//xahlee.info/python/classes.html)

A class is a boxed set of functions and variables. It defines a blueprint, of what variable and functions is together as a single thing.

### Define a Class

<object data=src/define-a-class.txt></object>

By convention, class names start with a capital

### Instantiate a Class, Create a Object

Classes are just blueprints of structures. Classes are usesell by themselves, just as how functions are useless if you don't call them

So you need to create a instance of the class to acutally do something.

Instance of a Class is called Object

Define constructor

You can define a method in a class such that it'll be automatically called when the class is instantiated. Such a method is called constructoro (aka initializer)

##  <a name='dictionary'>Dictionary</a>

<details><summary>Sources used:</summary>[w3schools](//w3schools.com/PYTHON/python_dictionaries.asp), [programiz.com](//programiz.com/python-programming/methods/dictionary)</details>

Create and print a dictionary

<object data=src/print-dictionary.txt></object>

Dictionary items are ordered, changeable, and do not allow duplicates. Dictionary items are presenteed in key:value pairs, and can be referred to by using the key name

We uses braces `{` and `}` to tell Python that this is a dictionary. We use `,` to seperate pairs. We use colons `:` to seperate keys and values

### values()

The values() method returns a view object that displays a list of all the values in the dictionary.

<object data=src/values-example.txt></object>

values() doesn't take any parameters

##  <a name='functions'>Functions</a>

Sources: [Bro Code](//youtu.be/89cGQjB5R4M?si=EIjztJPrvIBNdDoB), [Xah Lee](//xahlee.info/python/function_def.html), [Makers Academy, Intro-To-Python](//github.com/makersacademy/intro-to-python/blob/main/011_identity.py)

Functions are reusable blocks of code. Think of them as little machines, taking inputs, processing them in some way and returing an output

Independent functions

`len(my_string)`

Method functions

`my_string.replace("h", "w")`

## Happy Birthday

Tutorial from [Bro Code](https://youtu.be/89cGQjB5R4M?si=EIjztJPrvIBNdDoB)

<object data=src/function_print1.txt width=340 height=110></object>

## Invoice

<object data=src/function_print2.txt width=470 height=110></object>

`.2f` means round up to 2 decimal places

The `return` keyword is to exit a function and return a value

    def myfunction():
        return 3+3
    print(myfunction())

Statement's after the return line won't be executed

When you call a function some space gets allocated to it in RAM, when you compute the value of numbers that value will only exist while the function is still running, when the function gets deleted, most things in RAM such as integers get deleted

##  <a name='string'>String</a>

Sources used: [Xah Lee](//xahlee.info/python/quoting_strings.html), [Makers Academy](//github.com/makersacademy/intro-to-python/blob/main/023_string_indexing.py)

Strings are a sequence of characters. Python strings are immutable. Any function that works on a string returns a new string. Python uses zero-based indexing for strings. If you have a string with four characters, like "abcd", the indices will be 0, 1, 2, and 3 for each character.

In Python 3, they're a sequence of [unicode](//xahlee.info/comp/unicode_intro.html) characters. In Python 2 they're a sequence of bytes representing [ASCII](//xahlee.info/comp/ascii_chars.html) characters. But if prefixed with `u`, then it's a sequence of Unicode characters

### String Indexing

- `print(note[0])`
	- Access 1st character
- `print(note[-1])`
	- Access the last character
- `print(note[0:3])`
	- get portion of string between index 0 and 3

negativeIndex = originalIndex - len(string)

`print(note[6])`

Middle, not the first or last

### Get length of string

You can  get the length of a string using a function pre-loaded into Python called `len`

<object data=src/basic-string-length.txt></object>

### String replace

<object data=src/basic-string-replace.txt></object>

### Upper/lowercase

`txt = "HELLO"`

We can lowercase it simply by

`print(txt.lower())`

Uppercase would simply replace 'lower' with 'upper'

## Convert

`my_string = "Forty" + str(2)`

## Lists

`my_favourite_numbers = [1, 3, 5, 7, 9]`

`my_friends = ["Victoria", "Mel", "Melanie", "Emma"]`

## List indexing

- `my_list = [44, 35, 21, 63]`
	- `my_list[0]` # Evaluates to 44
	- `my_list[-1]` # Evaluates to 63
	- `my_list[1:3]` # Evaluates to [35, 21]

##  <a name='while'>While</a>

Sources used: [w3schools](//w3schools.com/python/python_while_loops.asp)

There are two varieties of control flows, `for` and `while` loops

    i = 1
    while i < 6:
        print(i)
        i += 1

> *NOTE:* remember to increment i (`i += 1`), or else the loop will continue forever

    i = 0
    while i < 10
        print(f"The number is now {i}")
        i = i + 1

`i = 0` is the counter variable

The `while` loop is like an `if`, in that it takes an expression that evaluates to True or False, and then executes its block of code if the condition is True. However, the `while` loop is different in that it keeps repeatedly executing the block for as long as the condition is True.

## The break statement

With a `brake` statement the loop can be stopped even if the `while` condition is true:

Exit the loop when `i` is 3:

i = 1
while i < 6:
    print(i)
    if i == 3:
        break
    i += 1


## Cats

<object data=src/function-add-cats.txt></object>

##  <a name='lambda'>Lambda</a>

Sources: [Xah Lee](//xahlee.info/python/python_lambda.html), [w3schools](//w3schools.com/python/python_lambda.asp)

Lambdas *MUST* be in a single line

### Lambda by example

Lambda with one arg, a function that adds 1

`print((lambda x: x + 1)(3))`

Add 10 to argument and return result

`x = lambda a : a + 10`

Lambda with two args, a function that adds two numbers

`print((lambda x, y: x + y)(3, 4))`

Summarize argument a, b, and c and return the result:

`x = lambda a, b, c : a + b + c`

Giving lambda a name

`ff = lambda x: x + 1`

Add two nummbers

`ff = lambda x, y: x + y`

Lambda used with filter

<object data=src/lambda-filter1.txt></object>

### Why use lambda?

The power of lambda is better shown when you use them as an anonymous function inside another function. Say you have a function definition that takes one argument, and that argument will be multiplied with an unknown number:

<object data=src/lambda-doubler.txt></object>
