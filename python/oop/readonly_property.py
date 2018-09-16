# encoding=utf8
class Vector2D(object):
    def __init__(self, x, y):
        self.__x = float(x)
        self.__y = float(y)
    
    @property
    def x(self):
        return self.__x
    @property
    def y(self):
        return self.__y
    
if __name__ == "__main__":
    v = Vector2D(3, 4)
    print(v.x, v.y)
    v.x = 8 # error will be raised.
    
    

class MyCls(object):
    readonly_property = 'readonly_property' 
    def __init__(self):
        pass
    def __setattr__(self, f, v):
        if f == 'readonly_property':
            raise AttributeError('{}.{} is READ ONLY'.\
                                 format(type(self).__name__, f))
            
        else:
            self.__dict__[f] = v
            
if __name__ == '__main__':
    obj = MyCls()
    
    obj.any_other_property = 'any_other_property'
    print(obj.any_other_property)
    
    print(obj.readonly_property)
    obj.readonly_property = 1