linear_wrappers_imported = False
try:
    import linear_wrappers
    linear_wrappers_imported = True
except Exception:
    pass

def _py_simple_one(x,y):
        return x+y+1

def _py_simple_two(x,y):
        return x+y+2

def odd(x):
    return bool(int(x)%2)

def simple(x,y):
    if odd(x):
        if linear_wrappers_imported:
            return linear_wrappers._cpp_simple_one(x,y)
        else:
            return _py_simple_one(x,y)
    else:
        if linear_wrappers_imported:
            return linear_wrappers._cpp_simple_two(x,y)
        else:
            return _py_simple_two(x,y)