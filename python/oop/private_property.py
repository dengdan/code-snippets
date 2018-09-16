class Vector2D(object):
    def __init__(self, x, y):
        self.__x = float(x)
        self.__y = float(y)
        self.xx = x
        self.yy = y 
    def get_x(self):
        return self.__x
if __name__ == "__main__":
    v = Vector2D(3, 4)
    print v.__dict__
    print v._Vector2D__x, v.get_x()
    v.__x