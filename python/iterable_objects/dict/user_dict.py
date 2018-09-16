#encoding=utf-8
'''
Created on 2017-06-29

@author: dengdan
'''
# the __misssing__() method is invoked by __getitem__() method when key not found.

class StrKeyDict(dict):
    def __missing__(self, key):
        if isinstance(key, int):
            return self[str(key)]
        raise KeyError(key)
    
    def get(self, key, default = None):
        try:
            return self[key]
        except KeyError:
            return default
    
    def __contains__(self, key):
        return key in self.keys() or str(key) in self.keys()
    
index = StrKeyDict({'1': 'one', '2': 'two'})
print(index['1'])
print(index[2])
print(1 in index)

# python3 only
# the UserDict class is more convenient to for customized implementation
# `data` is an instance of dict.
import collections
class SKD(collections.UserDict):
    def __missing__(self, key):
        if isinstance(key, str):
            raise KeyError(key)
        return self[str(key)]
        
    def __contains__(self, key):
        return str(key) in self.data
        
    def __setitem__(self, key, value):
        self.data[str(key)] = value;
        
index = SKD({1:'one'});
print(index[1])

