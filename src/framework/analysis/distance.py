
def _py_distance_one(x,y):
        return x+y+1

def _py_distance_two(x,y):
        return x+y+2

def odd(x):
    return bool(int(x)%2)


try:
    from framework.analysis._c_distance import _c_distance_one as c_one
    from framework.analysis._c_distance import _c_distance_two as c_two
except ImportError:
    c_one = _py_distance_one
    c_two = _py_distance_two

def distance(x,y):
    if odd(x):
        return c_one(x,y)
    else:
        return c_two(x,y)
    