# Makefiles

For this section, you should run the commands in the next section and look at what `make` does.
If you understand why everything here works, you should be able to make your own `Makefiles` for all the projects.

## Commands

Run the following commands, and observe what happens each time.
Note that `touch` just updates the time the file was modified to now, which tells make that the file has changed.

```
make
touch main.cpp
make
touch print.cpp
make
touch print.h
touch main.cpp
make
```

This should show you why object files are useful in large projects.
We can also build the object files by hand:

``
make clean
make print.o
make main.o
make
``

Now observe the flags used for compilation for the different targets.

```
make clean
make release
make clean
make debug
make clean
make all
```

Finally, look at some problems with `make clean`.

```
make clean
touch clean
make clean
```

To fix this, uncomment the line `.PHONY: clean`.
This tells `make` that `clean` isn't a real target, and whenever we type `make clean` it should run the command no matter what.
