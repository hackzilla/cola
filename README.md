# Cola

Because 'BASIC' was already taken.

## What?

Welcome to Cola, my little BASIC interpreter based on the original BASIC syntax, but refactored with some extra goodies and power in a < 300 line interpreter written in C.

Cola doesn't use anything special, and will basically run on any OS with any compiler (just don't try using some 1985 compiler and you should be fine).

## Building

Just clone the repo and run `make`, and that's basically it:

```
$ git clone https://github.com/beakr/cola.git
$ cd cola
$ make
```

## Syntax

Cola code works a lot like QBASIC on old Microsoft computers (but a lot less manual and lots of other more-epic things).

### Comments

```
' Comments can be created with the single quote character just like
' QBASIC and other BASIC dialects
```

### Functions

```
# Comments can also be created with an octothorpe as many other
# modern languages use

# You can define simple functions (in BASIC they're known as "subroutines") using the SUB keyword.
# Don't forget that Cola understands keywords in lowercase too, but the uppercase gives it a more
# "retro effect".
#
# All statements in Cola end with "END [KEYWORD NAME]".
SUB MULTBYEIGHT NUM
  # you can evaluate simple math expressions
  # by preceding lines with '>'
  > NUM*8
END SUB

# Now we can use the function we defined above to multiply
# the number 8 by 8
MULTBYEIGHT 8
#=> 64
```

### Math

```
# As shown above, we can do all the basic math expressions using '>'

> 7+2 # add
> 8-6 # subtract
> 6*6 # multiply
> 8/2 # divide

#=>
# 9
# 2
# 36
# 4
```

### Variables

```
# Variables can be named using any character from a-z
HELLO = "hello"
x = 2
COWSOUND = "moo"
```

### Strings

```
# Strings can be made using double quotes as usual.
# You can use PRINT to display a string.
PRINT "Welcome to the jungle!"

# Strings can also be interpolated, so
# you can add variables to your strings.
#
# '%' interpolates a number into your string.
x = 1
y = 2
z = 3
PRINT "%-%-%", x, y, z
#=> 1-2-3

# You can interpolate strings into other strings too, just use '$'
x = "Hello "
y = "world!"
PRINT "$$", x, y
#=> Hello world!
```
