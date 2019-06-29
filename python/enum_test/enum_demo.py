from enum import Enum
from enum import unique

class Color(Enum):
    Red = 0
    Green = 1

# enum can be iterated    
for color in Color:
    print(color)
    
print(list(Color))

# enum object can be created via value    
red = Color(0)
print(red)

# attri: name, value
print(red.name, red.value)

# value can be the same
# @unique unless unqiue is used
class Color2(Enum):
    Red1 = 0;
    Red2 = 0;
    
# but only the first one can be iterated and created via value 
for color in Color2:
    print(color)
    
print(Color2(0))
