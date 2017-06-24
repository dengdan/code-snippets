# the use of sorted/list.sort
str_ = 'hello,how,Are,you,i,am,fine,thanks'
str_arr = str_.split(',')
print str_arr
print sorted(str_arr)
print sorted(str_arr, reverse = True)
print sorted(str_arr, key = len) # the key acts like hash
print sorted(str_arr, key = str.lower) # case insensitive

# the key can also be used in min, max function
print max(str_arr)
print max(str_arr, key = len)
