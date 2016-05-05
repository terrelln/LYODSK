# gdb

We will be discussing the basics of using gdb.

# Bug 1

To get the full effect of this lesson, please don't look at `gdb_bug1.cpp` before you run it through gdb.

```
make bug1
gdb ./bug1
```

Once in gdb, run the following commands:

```
run        # Runs the executable `./bug1`, it will segfault and you will get control back.
bt         # Shows you the stack trace at the point of the segfault
up         # Unwinds the stack one level
up         # Running it 6 times will get you into user code
up
up
up
up
print vec  # Prints the variable vec, we see it has 6 elements.
print i    # The loop variable, we are accessing vec[7], which is invalid
```

Take a lot at `gdb_bug1.cpp` and understand why the bug is happening.

# Bug 2

Take a look at `gdb_bug2.cpp` this time.
We think there is a bug, and we want to inspect what is going on in the erase loop.
We can use the breakpoint feature of gdb.

```
make bug2
gdb ./bug2
```

Once in geb, run the following commands:

```
break gdb_bug2.cpp:18   # Set a breakpoing in file gdb_bug2.cpp at line 18
run                     # Run the executable
print v                 # Print the vector v
print i                 # Print the loop variable i
continue                # Continue running the program until the next breakpoing
p v                     # Shorter version of print
p i
c                       # Shorter version of continue
c
c
c
c
p v
p i
c                       # We are now in the iteration where the segfault happens
p v                     # Look at the vector
p i                     # and the loop variable
next                    # Execute the erase command, which will cause a segfault
```

Now you can use gdb to debug your projects.
But don't forget about the good old print statements!
