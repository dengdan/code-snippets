# the difference between a = a + b and a += b
##    the former will create a new object
##    the latter will operate on the original object, if it's changeable. Else, it will be the same as a = a + b
##    the former use __add__(), and the latter try to use __iadd__()
arr = [10]
arr_id = id(arr)
arr = arr + [20]
print 'A new object has been created using a = a + b: ', arr_id == id(arr)

arr = [10]
arr_id = id(arr)
arr += [20]
print 'Inplace Operation used by a += b:', arr_id == id(arr)

# The same difference also exists between list.sort and sort(list)
import util
arr = range(10)
util.rand.shuffle(arr)
print arr
print 'sorted(arr):', sorted(arr)
print 'arr untouched after sorted(arr)', arr
arr.sort(reverse = True)
print arr