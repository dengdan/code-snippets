# no new  grammar introduced, but new concept: tuple unpacking.
# I have been using it, but without knowing its name.

t = (1, 2)
print "%d %d"%t
a, b = t
print a, b
a, b = b, a
print a, b

def print_tuple(*argv):
    for a in argv:
        print a
print_tuple(*t)

# tuple unpacking can also be used in a nested way
t = ((1, 2), 3, 4)
(a, b), c, d = t
print a, b, c, d
