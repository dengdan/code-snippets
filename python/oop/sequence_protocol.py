#encoding=utf-8
'''
Created on 2017-09-24

@author: dengdan
'''
# __len__ and __getitem__ are the two methods needed to make a class 
# behave like a sequence.
class Seq(): 
    def __init__(self):
        self.__data = range(10)
        
    def __len__(self):
        return len(self.__data)
    
    def __getitem__(self, position):
        if type(position) == slice:
            position = slice(*position.indices(len(self.__data)))
        return self.__data[position]
    
if __name__ == '__main__':
    seq = Seq()
    print(len(seq))
    print(seq[-2])
    print(seq[::2])