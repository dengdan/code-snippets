# format
import numpy as np
class Vector2D(object):
    def __init__(self, x, y):
        self.x = float(x)
        self.y = float(y)
    
    def __iter__(self):
        return (v for v in (self.x, self.y))
    
    def __str__(self):
        return 'Vector2D({:.1f}, {:.1f})'.format(self.x, self.y)
    
    def __repr__(self):
        return self.__str__()
    
    def __abs__(self):
        return np.sqrt(self.x**2 + self.y**2)
    
    #Python3 Only    
    def __bool__(self):
        return bool(abs(self))
    
    def __eq__(self, other):
        return tuple(self) == tuple(other)
    
    def __format__(self, spec):
        # in nested form
        return 'Vector2D({:{spec}}, {:{spec}})'.format(self.x, self.y, spec = spec)
    
    def __hash__(self):
        return hash(str(self))
if __name__ == "__main__":
    x0 = 3
    y0 = 4
    v = Vector2D(x0, y0)
    
    # implement __iter__ to support unpack
    x, y = v
    assert(x == x0)
    assert(y == y0)
    
    # __str__
    assert str(v) == 'Vector2D({:.1f}, {:.1f})'.format(x0, y0)
    
    # __repr__, and __eq__
    v1 = eval(repr(v))
    assert v1 == v
    
    # __abs__
    assert abs(v) == np.sqrt(x0**2 + y0**2)
    
    # __bool__
    # Python3 Only    
    assert bool(v) == True
    assert bool(Vector2D(0, 0)) == False
    
    # __format__
    assert format(v, '.1f') == str(v)
    
    # __hash__
    assert v in {v:v}
    
    