class A(object):
    a = 'a'
    
class B(A):
    b = 'b'
    
class C(B):
    class_field = 'class field'
    def __getattr__(self, f):
        print('Method {}.__getattr__ has been called.'.format(
            self.__class__.__name__))
        return f
c = C()
print c.a
print c.b
print c.class_field
print c.c