<style>#toc{position:fixed;top:20px;right:20px;max-width:200px;padding:10px;overflow-y:auto;max-height:80vh;z-index:1000}</style>

# Python Programming

<div id="toc">
Table of Contents

- [Boolean](#boolean)
- [Data Structure](#data-structure)
	- [Dictionary](#dictionary)
	- [Lists](#lists)
	- [Tuple](#tuple)
- [Function and Class](#function-and-class)
	- [Functions](#functions)
	- [Lambda](#lambda)
	- [Class](#class)
- [If](#if)
- [String](#string)
- [While](#while)
- [Sources used](#sources-used)
</div>

##  <a name='boolean'>Boolean</a>


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

##  <a name='data-structure'>Data structure</a>

###  <a name='dictionary'>Dictionary</a>

Create and print a dictionary

<object data=src/print-dictionary.txt></object>

Dictionary items are ordered, changeable, and do not allow duplicates. Dictionary items are presenteed in key:value pairs, and can be referred to by using the key name

We uses braces `{` and `}` to tell Python that this is a dictionary. We use `,` to seperate pairs. We use colons `:` to seperate keys and values

### values()

The values() method returns a view object that displays a list of all the values in the dictionary.

<object data=src/values-example.txt></object>

values() doesn't take any parameters

###  <a name='lists'>Lists</a>

List = [] ordered and changeable. Duplicates OK
A collection is a single "variable" used to store *multiple* values

A list looks like this

`fruits = ["apple", "orange", "banana", "coconut"]`

To access one of the elements found in `fruits`

First element.. would be

`print(fruits[0])`

and so on...

If you try to access a non-existant value such as `print(fruits[4])`. You'll get the error, `IndexError: list item out of range`

With the index operator you could set a beginning, ending and step index

	print(fruits[0:3])

Technically, you can omit '0'

For a step, every second element beginning from index 0

	print(fruits[::2])

Would return, "['apple', 'banana']"

Going backwards,

	print(fruits[::-1])

Would return, "['coconut', 'banana', 'orange', 'apple']"

To iterate over a list,

	for fruit in fruits:

*note*: 'fruit' can be named anything, 'x', 'thing' etc. fruit is descriptive and isn't mandatory but a common naming convention

Get length of a list,

	print(len(fruits))

'4' would be returned

Using the "in" operator we could find if a value was in a collection

	print("apple" in fruits)

Returns "True", whereas

	print("pineapple" in fruits)

Returns "False" as it isn't a value in the list

Remember the very beginning, what we said about lists...

Lists are ordered and changeable. Duplicates OK

We can change one of the values even after we create our list

	fruits[0] = "pineapple"

If you iterate over the list now and print, you'll see pineapple is now the first value in the list

To add an element to the end of the list use the append method

	fruits.append("pineapple")

To remove an element use the remove method

	fruits.remove("apple")

To insert a value at a given index use the insert method

	fruits.insert(0, "pineapple")

To sort in alphabetical order

	fruits.sort()

To reverse a list, non alphabetically but in the order we placed them

	fruits.reverse()

If you'd like reverse *alphabetical* order you can first sort then reverse

To clear a list use the clear method

	fruits.clear()

To return the index of a value,

	fruits.index("apple")

Which would be 0. If we don't find a value we get an error, "ValueError: "pineapple" is not in the list"

Duplicates are OK,

	fruits.count("pineapple")

Would return 0

Reverse list

<object data=".txt/reverse_list.txt" width="264px" height="60px"></object>

Alternate solution, using slicing

<object data=".txt/negative_slicing_list.txt" width="264px" height="60px"></object>

<hr>

Add two lists index-wise. Create a new list that contains the 0th index item from both the list, then the 1st index item, and so on till the last element. any leftover items will get added at the end of the new list.

<object data=".txt/cat_lists_index_wise.txt" width="360px" height="80px"></object>

	['My', 'name', 'is', 'Kelly']

This is the output

<hr>

Given a list of numbers. write a program to turn every item of a list into its square

<object data=".txt/list_to_square.txt" width="256px" height="100px"></object>

Alternate solution, using list comprehension

<object data=".txt/list_comprehension_square.txt" width="288px" height="60px"></object>

<hr>

<object data=".txt/cat_2_lists_in_following_order.txt" width="344px" height="80px"></object>

###  <a name='tuple'>Tuple</a>

Tuples are like lists, except they cannot be changed. The slot values cannot change, the length cannot change

<hr>

## Create tuple by literal expression

- ()
	- Empty tuple
- (_a,_)
	- tuple with 1 item 
- (_a, b, c_)
	- tuple with item _a, b, c_

## Convert iterable to tuple

	tuple(iterable)

Return a new tuple with items of _iterable_

<object data="src/iterable-2-tuple.txt" width="160px" height="120px"></object>

Neither item, nor length of tuples can be changed

<object data="src/tuple-cannot-change-error.txt" width="568px" height="60px"></object>

## Nested Tuple and List

List and tuple can contain mixed datatypes and nested in anyway

<object data=src/nested-tuple-and-list.txt></object>

##  <a name='function-and-class'>Function and Class</a>

###  <a name='functions'>Functions</a>

Functions are reusable blocks of code. Think of them as little machines, taking inputs, processing them in some way and returing an output

Independent functions

`len(my_string)`

Method functions

`my_string.replace("h", "w")`

## Happy Birthday

<object data=src/function-print1.txt></object>

## Invoice

<object data=src/function-print2.txt></object>

`.2f` means round up to 2 decimal places

The `return` keyword is to exit a function and return a value

    def myfunction():
        return 3+3
    print(myfunction())

Statement's after the return line won't be executed

When you call a function some space gets allocated to it in RAM, when you compute the value of numbers that value will only exist while the function is still running, when the function gets deleted, most things in RAM such as integers get deleted

###  <a name='lambda'>Lambda</a>

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

###  <a name='class'>Class</a>

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
 
##  <a name='string'>String</a>

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


### Cats

<object data=src/function-add-cats.txt></object>

##  <a name='if'>if</a>

Example

<object data=src/if-example1.txt></object>

The `if` keyword tells Python we want coded executed conditionally

`leaves == 0:`  is the conditional expression, if evaluated to be true, then the block of code afterwards will be run, `==` is a comparison operator

# For loop

    for letter in ["a", "b", "c"]:
      print(f"This letter is {letter}")

The `for` loop iterates over a list, in simple-speak the Python `for` loop takes each item one by one and runs its block of code with that item

# Len

*Last update: 2024/09/17*

<hr>

'len' is a function pre-loaded into Python

    length = len("Hello!")
    print(f"String is {length} characters")

This prints the length of the string "Hello!"

<hr>

<object data="src/check_len_equals_5.txt" width="408px" height="150px"></object>

# Range

The `range()` function returns a sequence of numbers, starting from 0 by default, and increments by 1 (by default), and stops before a specified number

`range()` is mainly used when working with `for` loops - you can use it to loop through certain blocks of code a specified number of times

Negative values *can* be passeed to `range()` however float values *can not*

## Syntax

range(_start,  stop, step_)

## Parameter Values

- _start_
    - optional, an integer number specifying at which position to start, default is 0
- _stop_
    - required, an integer number specifying at which position to stop (not inculded
- _step_
    - optional, an integer number specifying the incrementation, default is 1

## Examples

#### A basic example

    x = range(6)
    for n in x:
        print(n)

#### Sequence of no. from 3-5, print each item in seq.

    x = range(3, 6)
    for n in x:
        print(n)

#### Seq. of no. from 3-19, but increment by 2 instead of 1

    x = range(3, 20, 2)
    for n in x:
        print(n)


#### Counting

    for num in range(3):
        print(num)
    # Output
    # 0
    # 1
    # 2
    # 3
    # 4

The function starts counting from 0, incremented by 1 on each iteration and ended at 4

#### How to Use the range() Function with the start And stop Arguments

    for num in range(5, 11):
        print(num)   
    # output
    # 5
    # 6
    # 7
    # 8
    # 9
    # 10

#### Create a list of numbers using the `range()` function

You can create a list of numbers by passing the `range()` function as an argument to the `list()` constructor,

    number_list = list(range(5))
    print(number_list)

### Use the `len()` function with `range()` 

Say you've got a list of items and want to do something to the items depending on how long the list is,

# Logic

    a = 10
    b = 20
    a = b 

    print(f"a is {a}")
    print(f"b is {b}")

If `A` corresponds to memory location ONE and you have ten, if `B` corresponds to memory location TWO, and `a = b` 

Python looks up the value of `b`, it sees that it is `20`, that `10` becomes overwritten

##  <a name='sources-used'>Sources used</a>

Sources used: [Xah Lee](//xahlee.info/python/true_false.html), [Makers Academy](//github.com/makersacademy/intro-to-python/), [w3schools](//w3schools.com/python/python_while_loops.asp), [programiz.com](//programiz.com/python-programming/methods/dictionary), [pynative](https://pynative.com/python-list-exercise-with-solutions/#h-exercise-1-reverse-a-list-in-python), [Bro Code](//youtu.be/89cGQjB5R4M?si=EIjztJPrvIBNdDoB)
