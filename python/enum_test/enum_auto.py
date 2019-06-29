from enum import Enum, auto
class Student(Enum):
    def _generate_next_value_(name, start, count, last_values):
        return name
    
    A = auto()
    B = auto()
    
for stu in Student:
    print(stu, stu.name, stu.value)