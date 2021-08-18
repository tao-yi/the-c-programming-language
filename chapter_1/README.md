# A Tutorial Introduction

> If an arithmetic operator has integer operands, an integer operation is performed.

> If an arithmetic operator has one floating-point operand and one integer operand, however, the integer will be converted to floating point before the operation is done.

```c
float fahr, celcius;
int lower, upper, step;
```

the assignment `fahr = lower;` and the test `while (fahr <= upper)` also work in the natural way - the int is converted to float before the operation is done.

- `%d` print as decimal integer
- `%6d` print as decimal integer, at least 6 characters wide
- `%f` print as floating point
- `%6f` print as floating point, at least 6 characters wide
- `%3.0f` print as floating point, at least three characters wide, with no decimal point and no fraction digits. 
- `%6.1f` print as floating point, at least six characters wide, with 1 digit after the decimal point.
- `%.2f`: two characters after the decimal point, but the width is not constrained;

## 1.4 Symbolic Constants

A `#define` line defines a symbolic name or symbolic constant to be a particular string of charactors.

```
#define name replacement text
```

Thereafter, any occurrence of name (not in quotes and not part of another name) will be replaced by the corresponding `replacement text`.

Symbolic constant names are conventionally written in upper case so they can be readily distinguished from lower case variable names.

## 1.5 Character Input and Output

A `text stream` is a sequence of characters divided into lines; each line consists of zero or more characters followed by a newline character.

- `getchar` reads the next input character from a text stream
- `putchar` prints a character each time it is called

### 1.5.1 File Copying

- `getchar` returns a distinctive value when there is no more input. The value is called `EOF`.
- `EOF` is an integer defined in `<stdio.h>`, but the specific numeric value doesn't matter as long as it is not the same as any any `char` value.

## 1.8 Arguments - Call by Value

In C, all function arguments are passed "by value".

This means that the called function is given the values of its arguments in temporary variables rather than the original.

## 1.9 Character Arrays

When a string constant like `"hello\n"` appears in a C program, it is stored as an array of characters containing the characters of the string and terminated with a `\0` to mark the end.

## 1.10 External Variables and Scope

Before a function can use an external variable, the name of the variable must be made known to the function. One way to do this is to write an `extern` declaration in the function; the declaration is the same as before except for the added keyword `extern`.

In certain circumstances, the `extern` declaration can be omitted.

