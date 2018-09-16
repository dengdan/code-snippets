import pyximport; pyximport.install()

import hello


import util
util.init_logger()
@util.dec.print_calling
def run():
    for i in xrange(1000000):
        hello.fib(1000)
        
run()
    

