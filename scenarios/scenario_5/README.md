
# Perfectly safe

Safety is important. Especially memory safety. We at gravity patrol take great pride in our memory safe library functions. Here's one. Its a method to concatenate two memory regions in a third one. And it reliably prevents buffer overflows! Or does it?

## Example usage 

```C
char a[] = "Hello ";
char b[] = "World";
char c[sizeof(a) + sizeof(b)];

memcat(a, b, c, sizeof(a), sizeof(b), sizeof(c));
```

## Bonus questions

* In the example above: what is the eventual content of `c`?
* What would `printf(c)` output? Why?
