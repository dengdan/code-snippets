import numpy as np
cimport numpy as np

cdef extern from "cpp_fn.cpp":
    cpdef int acc_int(int a)
    cpdef list[float] acc(list[float] a)
