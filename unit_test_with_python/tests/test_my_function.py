from ctypes import *

so_file = "./my_function.so"
my_functions = CDLL(so_file)

print(type(my_functions))

print(my_functions.square(2))
print(my_functions.square(3))
print(my_functions.square(4))
