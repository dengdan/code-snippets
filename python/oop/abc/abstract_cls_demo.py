#encoding=utf-8
'''
Created on 2017-09-24

@author: dengdan
'''
import abc
class Foo():
    __metaclass__ = abc.ABCMeta
    @abc.abstractmethod
    def hello(self):
        """"""
class Boo(Foo):
    def hello(self):
        print('hello')
foo = Boo()
print(Foo.__subclasses__())
print(foo)