import util

def fn(a, b, c):
    import time
    time.sleep(10)
    print a, b, c
    
process_pool = util.thread.ProcessPool(10)

for i in xrange(20):
    process_pool.add(fn, [i, i + 1, i + 2])
    
    print i
process_pool.join()
import pdb
pdb.set_trace()
print 'finished.'
