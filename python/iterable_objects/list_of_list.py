# when creating list of lists, you must be very careful
## dangerous because all [] share the same object. 
arr = [[]] * 10
arr[0].append(1)
print arr 

## list comprehension can be used to avoid the above problem 
arr = [[] for i in xrange(10)]
arr[0].append(1)
print arr