# Mission 1 - Echo Server
Did you know that gravitation produces an echo? Don't worry, most people don't. That's because They don't want you to know. Unfortunately, we know precariously little about echoes. And about gravitation. So we must learn. For [knowing is half the battle](https://media.giphy.com/media/KpRoZeI2dLhf2/giphy.mp4).

Your first task - should you accept it - is to create an echo server. 

This server should after launching:

* bind to port 2048 on localhost
* accept connections on said port
* for each client socket accepted:
  * read whatever (and as much as) the client sends 
  * print the received input verbatim to stdout
  * echo the input verbatim back to the sender

It is acceptable though discouraged to impose a reasonable limit to the maximum input size the server will handle.

Note that handling a single client connection at a time is sufficient. Concurrency is not needed at this point. However, the server must accept multiple connections in sequence.

Read this instructions carefully. And take care! This implementation will serve as the basis for further missions.

## Language

The solution has to be created in the C programming language and submitted in the form of a single source (`.c`) file. 

### Compilation

Your code will be compiled with the following command:

`$ gcc -Wall -std=C11 -pedantic echoserver.c -o echoserver`

C11 is the minimum C standard revision that is required for this solution but newer versions are acceptable too. If you'd like to use a newer version please indicate this upon submission. Note that only ANSI C is allowed, no GNU extensions or similar.

### Libraries

No libraries or frameworks except the standard (ANSI) C library and POSIX APIs are permitted.

### Code Style

This is C. Not Java, not PHP, not C++. Use of appropriate code style and idioms is expected.

## Example Usage and Output

The following client behaviour should be exhibited:

```bash
$ echo foobar | nc localhost 2048
foobar
```

When the above command is run your server should produce the following output:

```bash
$ ./echoserver 
foobar
```

## Scoring and Rewards

Points will be awarded as follows:
* 5 points for a generally working solution
* 4 points for a solution that accepts (and handles correctly) arbitrary input sizes.
* 1 point for a solution that is less than 100 loc (not counting empty lines and comments)
* 1 point for delivering a solution within 48 hours of this commit
* 1 point for delivering a solution within 24 hours of this commit
* 2 points for delivering a solution within 12 hours of this commit

Points will be deducted as follows:
* 1 point for every warning emitted upon compilation
* 1 point for each resource not freed/closed at appropriate times
* 1 point for each security vulnerability
* 1 point for each deviation from the requirements
* 1 point for larger idiomatic violations
* 1 point for each invocation or potential invocation of undefined behaviour

A positive overall score will be rewarded; likewise a negative score will be sanctioned appropriately.

