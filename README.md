# C++ Review

This repository goes over some of the basic C++ that we learned in CSC 121.

## Building Executables With CMake

You can use [CMake][cmake] to compile and build the executables for the project. First, you need to create a `build/` directory in the project. The build directory will house all of the compiled files as well as the `Makefile` for the project. Note that we do NOT check the `build/` directory into version control since each person will have to regenerate the executables on their own machine.

```bash
mkdir build
cd build
```

Once you are inside of the build directory, you can run the following command to build all of the executables for the project:

```bash
cmake .. && make
```

[cmake]: https://cmake.org/
