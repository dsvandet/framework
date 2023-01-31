from . import compiled_flag

def _py_distance_one(x,y):
        return x+y+1

def _py_distance_two(x,y):
        return x+y+2

def odd(x):
    return bool(int(x)%2)

def distance(x,y):
    if odd(x):
        if compile_flag:
            return analysis_compile._cpp_distance_one(x,y)
        else:
            return _py_distance_one(x,y)
    else:
        if compile_flag:
            return analysis_compile._cpp_distance_two(x,y)
        else:
            return _py_distance_two(x,y)
    