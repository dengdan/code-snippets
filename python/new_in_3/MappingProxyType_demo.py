# create a view of dict, its readonly
# but the change on the dict will be observed from this view.

from types import MappingProxyType
d = {1:1, 2:2}
view = MappingProxyType(d)
print(view)

try:
    view[3] = 3
except Exception:
    print('error when editing dict through MappingProxyType')

d[4] = 4
print(view)
