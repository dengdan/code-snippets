#encoding=utf-8
'''
Created on 2017-06-29

@author: dengdan
'''

# use get
index = {}
index.get
item = index.get(3, []) # item has not been stored as the value yet
item.append(88)
index[3] = item
print index[3]


# use set_default
index = {}
index.setdefault(3, []).append(99)
print index[3]

# use default dict
import collections
index = collections.defaultdict(list)
index[3].append(44)
print index[3]
