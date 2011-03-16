This repository is home to the little utilities for the terminal I have/might/will make. Currently it only contains one, and that is <code>strlen</code>.

## Directory Structure

In the bin folder you'll find the compiled utilities. In the src folder you'll find the source code for each utility.

## strlen

<code>strlen</code>, as you can probably guess, tells you how many characters are in a string. You can use it like this:

    $ strlen test test
    9
    
by passing in arguments for the string. If you don't pass in any arguments, the program will proceed to take the contents from standard input:

    $ strlen
    Foo
    Bar
    Hello world!
    ^D
    18

Don't enter the ^D of course, that's just a symbol for Ctrl+D. This allows you to do stuff like:

    $ strlen < Some_File.txt
    390
    $ pbpaste | strlen # how long is the stuff on my clipboard?
    65
    
There you go!