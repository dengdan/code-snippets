#encoding=utf-8
'''
Created on 2017-07-28

@author: dengdan
'''
# try to load to_be_loaded module from module/another

import util

import to_be_loaded
print to_be_loaded.val


path = util.io.get_absolute_path('another/to_be_loaded.py')
to_be_loaded2 = util.mod.load_mod_from_path(path, keep_name = True)
print to_be_loaded2.val

print to_be_loaded.val

import another_run_time
another_run_time.fn()