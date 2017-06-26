# array.array
# c-style array, with element type restricted

from array import array

# create
float_array = array('d', (i  for i in range(10**7))) # d for double
print len(float_array)
print float_array[1000]

# to file
path = '/home/dengdan/temp/no-use/float.bin';
with open(path, 'w') as f:
    float_array.tofile(f)

# from file    
float_array2 = array('d')
with open(path, 'rb') as f:
    float_array2.fromfile(f, 10**7)
print float_array2[1000]

# equals
print float_array == float_array2

float_array2[1000] = 1
print float_array == float_array2