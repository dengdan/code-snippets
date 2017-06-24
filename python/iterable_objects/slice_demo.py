from pygame.draw import ellipse

# Why the start included but last excluded
arr = range(10)
print arr[3:9] # we can get the number of fetched elements at a quick glance: end - start. no need to add 1
print arr[:5],arr[5:] # we can construct two un-overlapping list using a single number


# Use step value
print arr[::-1]


# The use of slice object
index = slice(0, 9, 2)
print index
print arr[index]

# del by slice
print 'before del:', arr
del arr[2:5]
print 'after del:', arr