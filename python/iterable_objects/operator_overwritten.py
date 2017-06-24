# Key points of this demo:
#    An implement of numeric class
#    Try test first programming
#    The difference between __str__ and __repr__: the former for readability, the latter for being unambiguous
#    A principle of middle operators like + and *: do not change the values of operands
import numpy as np
import util
class Vector():
    def __init__(self, x = 0, y = 0):
        self.x = x
        self.y = y
    
    def __repr__(self):
        return "Vector(x = %r, y = %r)"%(self.x, self.y)
    
    def __mul__(self, v2):
        if isinstance(v2, Vector):
            return v2.x * self.x + v2.y * self.y
        elif isinstance(v2, float) or isinstance(v2, int):
            return Vector(self.x * v2, self.y * v2)
        else:
            raise ValueError('Not Supported Operand for type: %s'%(type(v2)))
        
    def __add__(self, v2):
        if isinstance(v2, Vector):
            return Vector(v2.x + self.x, v2.y + self.y)
        else:
            raise ValueError('Not Supported Operand for type: %s'%(type(v2)))
        
    def __abs__(self):
        return np.sqrt(self.x**2 + self.y**2)

    @util.dec.print_calling    
    def __bool__(self):
        return bool(self.x or self.y)
    
v1 = Vector(1, 2)
v2 = Vector(3, 4)
print str(v1)
assert v1 * v2 == 11
#assert v1 * 3 == Vector(3, 6)# Not good yet
print v1 + v2 # == Vector(4, 6)
assert abs(v2) == 5
#assert not v1 # not work, why? 

