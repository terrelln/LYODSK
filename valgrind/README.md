# valgrind

This section is pretty short.
Basically whenever you have a `segfault`, or getting garbage data in your data structures, you should run your program through valgrind and see if it finds anything.

## Leak Checking

First, we will show how valgrind can detect leaks.
Look at `leak.cpp`, and you will see that it leaks memory.
Run the command:

```
make leak
valgrind ./leak
```

You will see the line:

```
LEAK SUMMARY:
    definitely lost: 20,000 bytes in 1 blocks
```

This is what you want to be looking for when checking if you leaked anything.
There are other lines in the leak summary, but this is the one that is most worrying.
With the advent of C++14, you should be using `std::unique_ptr`, and should never leak memory ever.

## Segfault Checking

Now, we will look ast valgrinds bad memory access detection.
Look at `valgrind.cpp`, and you will see that it accesses the vector beyond the last element.
Run the command:

```
make valgrind
valgrind ./valgrind
```

You will see that valgrind will tell you what line has an invalid memory access.
