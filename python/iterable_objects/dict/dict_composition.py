#encoding=utf-8
'''
Created on 2017-06-29

@author: dengdan
'''
names = ['Tom', 'John', 'Dany', 'Joe']
IDs = range(4)

person_arc = {person_id:name for person_id, name in zip(IDs, names)}
print person_arc