
# We're all floating down here.

Write a program that prints the internal binary in-memory representation of a floating point number to stdout.

Example: The internal binary representation of 1.0f is 00111111100000000000000000000000.

Your solution must not use more than 25 loc (comments and empty lines not counted).

Hint: You can find some examples for single precision floating point numbers here: https://en.wikipedia.org/wiki/Single-precision_floating-point_format

## Example usage and output

This is an example of the output your program might produce:

```bash
$ ./f2bin 1.0 -1.0 2.0 -2.0
 1.000000: 001111111 00000000 00000000 0000000
-1.000000: 101111111 00000000 00000000 0000000
 2.000000: 010000000 00000000 00000000 0000000
-2.000000: 110000000 00000000 00000000 0000000
```

Note that none of the "formatting" above is required. Printing the resulting binary representatiomn verbatim is sufficient.

## Scoring

Points will be awarded as follows:

* 5 points for a solution that works for single precision numbers (`float`)
* 3 points for a solution that works for double precision values as well.
* 1 point for a solution that takes the value to work with from the command line
* 1 point for a solution that takes an arbitrary number of values from the command line
* 2 points if the solution weighs in at less than 15 loc.

Points will be deducted as follows:
* 1 point for every warning emitted upon compilation
* 1 point for every loc above 25
* 1 point for each outright bug
* 1 point for larger idiomatic or code style violations
* 1 point for each invocation or potential invocation of undefined behaviour

A positive overall score will be [rewarded](https://i.imgur.com/vGUDUxL.gif); likewise a negative score will be [sanctioned](https://i.imgur.com/ggzEGJi.mp4) appropriately.

