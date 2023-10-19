import random
import ctypes

# Load the dynamic library
mylibrary = ctypes.CDLL('./mylibrary.so')

a = random.randint(-111, 111)
b = random.randint(-111, 111)

# Call the C functions from the dynamic library
result_add = mylibrary.add(a, b)
result_sub = mylibrary.sub(a, b)
result_mul = mylibrary.mul(a, b)
result_div = mylibrary.div(a, b)
result_mod = mylibrary.mod(a, b)

print(f"{a} + {b} = {result_add}")
print(f"{a} - {b} = {result_sub}")
print(f"{a} x {b} = {result_mul}")
print(f"{a} / {b} = {result_div}")
print(f"{a} % {b} = {result_mod}")

