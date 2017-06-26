# deque, queue
# thread safe
from collections import deque
q = deque(xrange(9), maxlen = 10)
print len(q), ":" , q
q.append(10)
print len(q), ":" , q

# when queue is full, the first element will be popped out automatically
q.append(10)
print len(q), ":" , q