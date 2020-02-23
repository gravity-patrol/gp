
# Mission 1 - Adventures in Unix Land
We're going on an [adventure](https://media.giphy.com/media/SPqWIXdAccQmY/giphy.gif). But first we need to map our surroundings. Lets start out easy:

Write a program that lists the contents of a directory, one entry per line. This program should take the directory as its first command line argument. If a command line argument is ommitted, the current working directory is to be assumed.

## Language

The solution has to be created in the C programming language and submitted in the form of a single source (`.c`) file.

### Compilation

Your code will be compiled with the following command:

`$ gcc -Wall -std=C11 -pedantic lsr.c -o lsr`

C11 is the minimum C standard revision that is required for this solution but newer versions are acceptable too. If you'd like to use a newer version please indicate this upon submission. Note that only ANSI C is allowed, no GNU extensions or similar.

### Libraries

No libraries or frameworks except the standard (ANSI) C library and POSIX APIs are permitted.

### Code Style

This is C. Not Java, not PHP, not C++. Use of appropriate code style and idioms is expected.

## Example Usage and Output

The following behaviour should be exhibited:

```bash
$ ./lsr
.
..
lsr.c
README.md
lsr
```

```bash
$ ./lsr /usr
.
..
bin
standalone
libexec
sbin
local
lib
X11
X11R6
share
```

## Scoring and Rewards

Points will be awarded as follows:
* 5 points for a generally working solution
* 1 point for a solution that is less than 50 loc (not counting empty lines and comments)


Points will be deducted as follows:
* 1 point for every warning emitted upon compilation
* 1 point for each resource not freed/closed at appropriate times
* 1 point for each security vulnerability
* 1 point for each deviation from the requirements
* 1 point for larger idiomatic violations
* 1 point for each invocation or potential invocation of undefined behaviour

A positive overall score will be [rewarded](https://i.giphy.com/media/14vkcterW6tMdy/giphy.webp); likewise a negative score will be [sanctioned](https://i.giphy.com/media/SiJW7VcRVz7PO/giphy.webp) appropriately.

