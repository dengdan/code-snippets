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
print index['1']
print index[2]
print 1 in index