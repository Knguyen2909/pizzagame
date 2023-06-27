# Compile the library:
gcc -I. lib.c -c -fpic
gcc -shared -o libmylib.so lib.o
# Compile the test, we use the current directory for include and libraries.
gcc -I. -L. test1.c -o test1 -lmylib -Wl,--rpath=$PWD
# Compile the end user application (uses the same flags in this example):
gcc -I. -L. use.c -o use -lmylib -Wl,--rpath=$PWD
