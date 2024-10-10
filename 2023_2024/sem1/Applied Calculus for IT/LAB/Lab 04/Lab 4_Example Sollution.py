import math 
import numpy as np
import sympy as sp
from sympy import * 
from matplotlib import pyplot as plt
x = sp.symbols('x')

# Exercise 1:_________________________________________________________________________________
print("Exercise 1: ")

f1a = abs(x*x - x - 7)
lmf1a = sp.limit(f1a, x, 3)
print(lmf1a)

f1b = (abs(x - 1) / (x ** 2 -1))
lmf1b = sp.limit(f1b, x, sp.oo)
print(lmf1b)

f1c = ((math.e) ** (1 / x))
lmf1c = sp.limit(f1c, x, 1)
print(lmf1c)

f1d = ((x ** 4 -16) / (x - 2))
lmf1d = sp.limit(f1d, x, 2)
print(lmf1d)

# Exercise 2:__________________________________________________________________________________
print("Exercise 2: ")

value = np.arange(0, 3, 0.0005)

f2a = abs(x**2 - x - 7)
f2a_x = lambdify(x, f2a, "numpy")(value)
plt.xlabel("x-axis")
plt.ylabel("y-axis")
plt.title("a) abs(x**2 - x - 7)")
plt.plot(value, f2a_x, color = 'blue')
plt.show()
print()

f2b = (abs(x - 1) / (x ** 2 -1))
f2b_x = lambdify(x, f2b, "numpy")(value)
plt.xlabel("x-axis")
plt.ylabel("y-axis")
plt.title("b) abs((x - 1) / (x ** 2 -1))")
plt.plot(value, f2b_x, color = 'purple')
plt.show()
print()

f2c = ((math.e) ** (1 / x))
f2c_x = lambdify(x, f2c, "numpy")(value)
plt.xlabel("x-axis")
plt.ylabel("y-axis")
plt.title("c) (math.e) ** (1 / x)")
plt.plot(value, f2c_x, color = 'green')
plt.show()
print()

f2d = ((x ** 4 -16) / (x - 2))
f2d_x = lambdify(x, f2d, "numpy")(value)
plt.xlabel("x-axis")
plt.ylabel("y-axis")
plt.title("d) (x ** 4 -16) / (x - 2)")
plt.plot(value, f2d_x, color = 'pink')
plt.show()
print()

# Exercise 3:_____________________________________________________________________________________
print("Exercise 3: ")

value = np.arange(-4, 4, 0.0001)

f3a = 1 / (1 + 2 ** (1/x))

f3a_x = lambdify(x, f3a, "numpy")(value)

f3a_lm = limit(f3a, x, 0)
print("a) Lim of function at x = 0 is ",f3a_lm)

f3a_lr = limit(f3a, x, 0, '+')
print("a) Lim of function at x = 0+ is ",f3a_lr)

f3a_ll = limit(f3a, x, 0, '-')
print("a) Lim of function at x = 0- is ",f3a_ll)

if f3a_lm == f3a_lr and f3a_lm == f3a_ll:
  print("a) The function is continuous at 0")
  plt.xlabel("x-axis")
  plt.ylabel("y-axis")
  plt.plot(value, f3a_x, color ='blue')
  plt.title("a) f = 1 / (1 + 2 ** (1/x))")
  plt.show()
else:
  print("a) The function isn't continuous at 0")
  plt.xlabel("x-axis")
  plt.ylabel("y-axis")
  plt.plot(value, f3a_x, color ='red')
  plt.title("a) f = 1 / (1 + 2 ** (1/x))")
  plt.show()

print()

# Exercise 4: _________________________________________________________________________________
print("Exercise 4: ")
f4 = sin(1/x) 
lm = limit(0, x, 0)
lml = limit(0, x, 0, '-')
lmr = limit(f4, x, 0, '+')
print("The limit of f(x) at x = 0 is {}".format(lm))
print("The limit of f(x) at x = 0+ is {}".format(lmr))
print("The limit of f(x) at x = 0- is {}".format(lml))

# Exercise 5: _________________________________________________________________________________
print("Exercise 5: ")
f5a = x**2 - 7
c = 1
f5a_lm = limit(f5a, x, c)
f5a_lr = limit(f5a, x, c, '+')
f5a_ll = limit(f5a, x, c, '-')

if f5a_lm == f5a_lr and f5a_lm == f5a_ll:
  print("a) The function is continuous at 1")
else:
  print("a) The function isn't continuous at 1")

print()

# Exercise 6:
print("Exercise 6: ")
f6a = (x**2 - x - 6) / (x-3)

f6a_lr = limit(f6a, x, 0, '+')
f6a_ll = limit(f6a, x, 0, '-')

if f6a_lr == 5 and f6a_ll == 5:
  print("a) The function is continuous at 0")
else:
  print("a) The function isn't continuous at 0")

print()

# Exercis 7:_________________________________________________________________________
print('Exercise 7: ')

f7a = (x**2 - x - 2) / (x-2)
f7a_lm = limit(f7a,x,2)
f7a_lr = limit(f7a,x,2,'+')
f7a_ll = limit(f7a,x,2,'-')
if f7a_lm == f7a_lr and f7a_lm == f7a_ll:
  print("1) The function is continuous at x = 2")
else:
  print("1) The function isn't continuous at x = 2")

print()

# Exercise 8:____________________________________________________________________________
print("Exercise 8:")
f8 = 1 - (1 - x**2)**(1/2)

f8_lim_minus1 = limit(f8, x, -1)

f8_lim_1 = limit(f8, x, 1)

if f8_lim_minus1 == f8_lim_1:
  print("The function f(x) = 1 − sqrt(1-x**2) is continuous on the interval [−1; 1]")
else:
  print("The function f(x) = 1 − sqrt(1-x**2) isn't continuous on the interval [−1; 1]")

# Exercise 9:____________________________________________________________________________
print("Exercise 9:")

list_x = np.array([2, 1.5, 1.4, 1.3, 1.2, 1.1, 0.5, 0.6, 0.7, 0.8, 0.9])
x1 = 1
y1 = 0
for x2 in list_x:
  y2 = sin(10*pi/x2)
  print("Coordinates of point Q:",x2,y2)
  k = (y2 - y1) / (x2 - x1)
  print("Slope is ",k)

  # Exercise 10:
f10a_lr = limit(f10a, x, 0, '+')
f10a_ll = limit(f10a, x, 0, '-')

if f10a_lr == f10a_ll:
  L = f10a_lr
  print("a) L = {}".format(L))
else:
  print("Can't find L")

print()
