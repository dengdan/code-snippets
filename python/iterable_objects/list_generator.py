# list generator is faster in time and smaller in space compared to list comprehension when used in for loop
# the differences in grammar:
#    replace [] with ()
#    no brackets needed if used as a function parameter

symbols = 'abcd'
print tuple((ord(s) for s in symbols))
print tuple(ord(s) for s in symbols)
print tuple([ord(s) for s in symbols])


import util
util.init_logger()
# list 
channels = 'rgb'
val = range(3000)

# list comprehension
@util.dec.print_calling_in_short
def lc():
    for color in [(c, v) for c in channels  for v in val]:
        color
    
# list generator
@util.dec.print_calling_in_short
def lg():
    for color in ((c, v) for c in channels for v in val):
        color

lc()
lg()

#2017-06-21 09:30:20,759 dec.py[line:34] DEBUG: function [lc] has been called, taking 0.002917 seconds
#2017-06-21 09:30:20,760 dec.py[line:34] DEBUG: function [lg] has been called, taking 0.000734 seconds
