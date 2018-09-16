import util
def hello(m, n, o):
    """"""
    print "m = %s, n = %s, o = %s"%(m, n, o)
    
 
if __name__ == '__main__':
    threads = util.thread.ThreadPool(100)
    
    for i in xrange(100):
        threads.add(hello, [i, i + 1, i + 2])
        threads.add(hello, {'m': i * 10, 'n': i * 20, 'o': i * 30})
    threads.join()
    print 'finish.'
    