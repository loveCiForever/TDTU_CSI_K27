#Exercise 1___________________________________________________________________________________________________
from math import *

def f1a(x):
  return sqrt(x)
def f1b(x):
  return x**(1/3)
def f1c(x): 
  return x**(2/3)
def f1d(x):
  return (x**3) / 3 - (x**2) / 2 - 2*x + 1/3
def f1e(x):
  return (2 * x**2 - 3) / (7*x + 4)
def f1f(x):
  return (5 * x**2 + 8*x - 3) / (3 * x**2 + 2)
def f1g(x):
  return sin(x)
def f1h(x):
  return cos(x)
def f1i(x):
  return 3 ** x
def f1j(x):
  return 10 ** (-x)
def f1k(x):
  return exp(x)
def f1l(x):
  return log2(x)
def f1m(x):
  return log10(x)
def f1n(x):
  return log(x)

x = 5

print("a) The result is",f1a(x))
print("b) The result is",f1b(x))
print("c) The result is",f1c(x))
print("d) The result is",f1d(x))
print("e) The result is",f1e(x))
print("f) The result is",f1f(x))
print("g) The result is",f1g(x))
print("h) The result is",f1h(x))
print("i) The result is",f1i(x))
print("j) The result is",f1j(x))
print("k) The result is",f1k(x))
print("l) The result is",f1l(x))
print("m) The result is",f1m(x))
print("n) The result is",f1n(x))




"""Exercise 2: Write a computer program to find the range of the functions below __________________________________________"""
from math import *

def f2a(x):
  return 2 + x**2 / (x**2 + 4)
for x in range (-2,3):
  print("a) x = " + str(x) +  ": 2 + (x**2 / x**2 + 4) = ",f2a(x))

print("-----------------------------------------------")

def f2b(x):
  return sqrt(5*x + 10)
for x in range (0,6):
  print("b) x = " + str(x) +  ": sqrt(5*x + 10) = ",f2b(x))

print("-----------------------------------------------")

def f2c(x):
  return 2 / (x**2 - 16)
for x in range (5,11):
  print("c) x = " + str(x) + ": 2 / (x**2 - 16) = ",f2c(x))

print("-----------------------------------------------")

def f2d(x):
  return x**4 + 3 * x**2 - 1
for x in range (-3,4):
  print("d) x = " + str(x) + ": x**4 + 3 * x**2 - 1 = ",f2d(x))
  
print("-----------------------------------------------")

def f2e(x):
  if x >= 0:
    return x
  else:
    return -x
for x in [-3,3]:
  print("e) x = " + str(x) + ": The result is ",f2e(x))

print("-----------------------------------------------")




"""Exercise 3: Write a computer program to compute the composites of function f1(x) and f2(x). Meanwhile,
f1 = x + 5 and f2(x) = x^2 − 3 ___________________________________________________________________________________________
"""
f1 = lambda x: x + 5
f2 = lambda x: x**2 - 3
print("f1(f2(0)) = {}.".format(f1(f2(0))))
print("f2(f1(0)) = {}.".format(f2(f1(0))))
print("f1(f1(-5)) = {}.".format(f1(f1(-5))))
print("f2(f2(2)) = {}.".format(f2(f2(2))))




"""Exercise 5:____________________________________________________________________________________________________________"""
from matplotlib import pyplot as plt
from math import *
from numpy import *

value = arange(-2, 2, 0.0000001)

f1 = lambda x: (1 - (abs(x) - 1)** 2)** 0.5
f2 = lambda x: (-3) * (1 - (abs(x) / 2)** 0.5)** 0.5

plt.plot(value, f1(value), color='blue')
plt.plot(value, f2(value), color='red')

plt.xlabel("x-axis")
plt.ylabel("y-axis")
plt.show()




"""Exercise 6: Write a computer program to show the original and shifted graphs together, labeling each
graph with its equation in these following cases __________________________________________________________________________
"""
from matplotlib import pyplot as plt
from numpy import *
from math import *

# câu a
k_a = linspace(2, 12, 6)
value_a = arange(-10, 10)
f10a = lambda x, k: x**2 + k
for ki in k_a: 
  plt.plot(value_a, f10a(value_a,ki))
plt.show()

print()

# câu b
k_b = linspace(2, 12, 6)
value_b = arange(-10, 10)
f10b = lambda x, k: (x+k)**2
for ki in k_b:
  plt.plot(value_b, f10b(value_b,ki))
plt.show()

print()

# câu c
value_c = arange(1, 50)
f10c = lambda x, k: k * (x**(1/2))
for k in [1/3,1,3,6]:
  plt.plot(value_c, f10c(value_c,k))
plt.show()

print()

# câu d
value_d = arange(-2, 2, 0.0005)
f10d = lambda x: x**3 
f10d_down = lambda x: x**3 - 1
f10d_left = lambda x: (x+1)**3
  
plt.plot(value_d, f10d(value_d),color='red')
plt.plot(value_d, f10d_down(value_d),color='blue')
plt.plot(value_d, f10d_left(value_d),color='green')
plt.show()

print()

# câu e
value_e = arange(1.05, 4.05, 0.0005)
f10e = lambda x: x**(2/3)
f10e_down = lambda x: x**(2/3) - 1
f10e_right = lambda x: (x-1)**(2/3)

plt.plot(value_e, f10e(value_e),color='red')
plt.plot(value_e, f10e_down(value_e),color='blue')
plt.plot(value_e, f10e_right(value_e),color='green')
plt.show()

print()

# câu f
value_f = arange(-5, 5, 0.0005)
f10f = lambda x: 1/2 * (x+1) + 5
f10f_down = lambda x: 1/2 * (x+1)
f10f_right = lambda x: 1/2 * (x) + 5

plt.plot(value_f, f10f(value_f),color='red')
plt.plot(value_f, f10f_down(value_f),color='blue')
plt.plot(value_f, f10f_right(value_f),color='green')
plt.show()

print()

# câu g
value_g = arange(-15, -5, 0.00005)
f10g = lambda x: 1/(x**2)
f10g_down = lambda x: 1/(x**2) - 1
f10g_left = lambda x: 1/((x+2)**2)

plt.plot(value_g, f10g(value_g),color='red')
plt.plot(value_g, f10g_down(value_g),color='blue')
plt.plot(value_g, f10g_left(value_g),color='green')
plt.show()

print()

# câu h
value_h = arange(-10, 10)
f10h = lambda x: 1 - (x)**3
f10h_stretch_horizontal_by_factor_of_2 = lambda x: 1 - (x/2)**3
plt.plot(value_h, f10h(value_h))
plt.plot(value_h, f10h_stretch_horizontal_by_factor_of_2(value_h))
plt.show()

print()

# câu i
value_i = arange(0, 10)
f10i = lambda x: (x+1)**(1/2)
f10i_compress_horizontal_by_factor_of_4 = lambda x: (4*x+1)**(1/2)
plt.plot(value_i, f10i(value_i))
plt.plot(value_i, f10i_compress_horizontal_by_factor_of_4(value_i))
plt.show()

print()

# câu j
value_j = arange(0,10)
f10j = lambda x: (x+1)**(1/2)
f10j_stretch_vertical_by_factor_of_3 = lambda x: 3 * (x+1)**(1/2);

plt.plot(value_j, f10j(value_j))
plt.plot(value_j, f10j_stretch_vertical_by_factor_of_3(value_j))
plt.show()




"""Exercise 7: Use a graph to decide whether f is one-to-one function____________________________________________________________________"""
from matplotlib import pyplot as plt 
from numpy import *

value = arange(-2, 2, 0.0001)

f11a = lambda x: x**3 - (x/2)
f11b = lambda x: x**2 + (x/2)

plt.plot(value, f11a(value), color='red')
plt.plot(value, f11b(value), color='blue')

plt.grid(linestyle='-')
plt.show()
