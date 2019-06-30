from enum import Enum
from enum import unique

class Color(Enum):
    Red = 1
    Green = 2

# enum can be iterated    
for color in Color:
    print(color)
    
print(list(Color))

# enum object can be created via value    
red = Color(1)
print(red)

# attri: name, value
print(red.name, red.value)

# value can be the same
# @unique unless unqiue is used
class Color2(Enum):
    Red1 = 1;
    Red2 = 1;
    
# but only the first one can be iterated and created via value 
for color in Color2:
    print(color)
    
print(Color2(1))

# Simple Enum class can be created via calling Enum
name = "ObjectTypes"
ObjectTypes = Enum(name, "Car Person")
ObjectTypes = Enum(name, "Car Person")
for ot in ObjectTypes:
    print(ot.name, ot.value)
