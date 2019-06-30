from enum import Enum
class ObjectFormat(Enum):
    def __init__(self, attrs):
        self.attrs = attrs
        
    def print_self(self):
        print(self.name, self.value, self.attrs)
    KittiGt = ("hello")
    KittiDet = ("how")
    
        
    
    
    
for of in ObjectFormat:
    of.print_self()