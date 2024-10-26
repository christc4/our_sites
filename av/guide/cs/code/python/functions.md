# Functions

2024/10/07

<details><summary>Sources used:</summary>
[Bro Code](https://youtu.be/89cGQjB5R4M?si=EIjztJPrvIBNdDoB), [Xah Lee](http://xahlee.info/python/function_def.html), [Makers Academy, Intro-To-Python](https://github.com/makersacademy/intro-to-python/blob/main/011_identity.py)
</details>

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

