These codes have been taken from Cython A Guide for Python Programmers – Kurt W. Smith.

# Compiling

Generate the C file using: `cython -a cfib.pyx`

Generate the shared lib file using gcc: `gcc -shared -fopenmp -pthread -fPIC -fwrapv -O2 -Wall -fno-strict-aliasing  -I/usr/include/python2.7 -o lib.so lib.c`
