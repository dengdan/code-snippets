from distutils.core import setup
from Cython.Build import cythonize

setup(ext_modules = cythonize(
           "fn.pyx",                 # our Cython source
           sources=["cpp_fn.cp"],  # additional source file(s)
           language="c++",             # generate C++ code
      ))
