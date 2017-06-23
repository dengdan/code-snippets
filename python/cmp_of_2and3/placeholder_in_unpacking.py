# when we are unpacking a list or tuple, we may only be interested in some of its elements
t = tuple(range(5))

# _ is a good choice at most times
a, b, c, d, _ = t
print(a, b, c, d)

# * can also be used in python3
# a, *rest = t
# print(a)
# print(rest)
