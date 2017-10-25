These codes have been taken from Cython A Guide for Python Programmers – Kurt W. Smith.

# Compiling
## Using distutils
Create a `setup.py` wich will import `setup` & `cythonize` modules from distutils and cython respectively and create a cithonized version of the `.pyx code` when compiled:

`from distutils.core import setup`

`from Cython.Build import cythonize`

`setup(ext_modules=cythonize('cfib.pyx'))`

then type `python setup.py build_ext --inplace` as command line to compile and create the shared object file.

## Hand-compiling

Generate the C file using: `cython -a cfib.pyx`

Generate the shared lib file using gcc: `gcc -shared -fopenmp -pthread -fPIC -fwrapv -O2 -Wall -fno-strict-aliasing  -I/usr/include/python2.7 -o lib.so lib.c`
