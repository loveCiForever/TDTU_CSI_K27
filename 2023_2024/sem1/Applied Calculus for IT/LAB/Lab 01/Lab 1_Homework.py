# Author: Nguyen Quang Huy
# Student ID: 523h0140
# Class: 23H50301
# Major: Computer Science
# Faculty: IT

import math
   
PI = math.pi
E = math.e

# math.cosh()
n = float(input("Enter n to solve math.cosh(n): "))
print("math.cos(", n ,") = " ,math.cosh(n)) 

# math.frexp()
n = float(input("Enter n to solve math.frexp(n): "))
print("math.frexp(", n ,") = " , math.frexp(n)) 

# math.fsum()
list = input("Enter a list to solve math.fsum(list): ")
print("math.fsum(", list ,") = " , math.fsum(list))

# math.gamma()
n = float(input("Enter n to solve math.gamma(n): "))
print("math.gamma(", n ,") = " , math.gamma(n)) 

# math.degrees()
n = float(input("Enter n to solve math.degrees(n): "))
print("math.degrees(", n ,") = " ,math.degrees(n)) 

# math.erf()
n = float(input("Enter n to solve math.erf(n): "))
print("math.erf(", n ,") = " , math.erf(n)) 

# math.erfc()
n = float(input("Enter n to solve math.erfc(n): "))
print("math.erfc(", n ,") = " , math.erfc(n)) 

# math.exp()
n = float(input("Enter n to solve math.exp(n): "))
print("math.exp(", n ,") = " , math.exp(n)) 

# math.expm1()
n = float(input("Enter n to solve math.expm1(n): "))
print("math.expm1(", n ,") = " , math.expm1(n)) 

# math.fabs()
n = float(input("Enter n to solve math.fabs(n): "))
print("math.fabs(", n ,") = " , math.fabs(n)) 

# math.factorial()
n = float(input("Enter n to solve math.factorial(n): "))
print("math.factorial(", n ,") = " , math.factorial(n)) 

# math.floor()
n = float(input("Enter n to solve math.floor(n): "))
print("math.floor(", n ,") = " , math.floor(n)) 

# math.fmod()
x = float(input("Enter x to solve math.fmod(x , y): "))
y = float(input("Enter y to solve math.fmod(x , y): "))
print("math.fmod(", x , "," , y ,") = " , math.fmod(x, y))

# math.acos()
n_acos = float(input("Enter n to solve math.acos(n): "))
print("math.acos(", n_acos ,") = " ,math.acos(n_acos)) 

# math.ceil()
n_ceil = float(input("Enter n to solve math.ceil(n): "))
print("math.ceil(", n_ceil ,") = " ,math.ceil(n_ceil)) 

# math.acosh()
n_acosh = float(input("Enter n to solve math.acosh(n): "))
print("math.acosh(", n_acosh ,") = " ,math.acosh(n_acosh)) 

# math.asin()
n_asin = float(input("Enter n to solve math.asin(n): "))
print("math.asin(", n_asin ,") = " ,math.asin(n_asin)) 

# math.asinh()
n_asinh = float(input("Enter n to solve math.asinh(n): "))
print("math.asinh(", n_asinh ,") = " ,math.asinh(n_asinh)) 

#math.atan()
n_atan = float(input("Enter n to solve math.atan(n): "))
print("math.atan(", n_atan ,") = " ,math.atan(n_atan)) 

# math.atan2()
x_atan2 = float(input("Enter x to solve math.atan2(y, x): "))
y_atan2 = float(input("Enter y to solve math.atan2(y, x): "))
print("math.atan2(", y_atan2, "," , x_atan2 ,") = " ,math.atan2(y_atan2, x_atan2))

# math.atanh()
n_atanh = float(input("Enter n to solve math.atanh(n): "))
print("math.atanh(", n_atanh ,") = " ,math.atanh(n_atanh)) 

# math.comb()
n_comb = float(input("Enter n to solve math.atan2(n, k): "))
k_comb = float(input("Enter k to solve math.atan2(n, k): "))
print("math.atan2(", n_comb , "," , k_comb ,") = " ,math.atan2(n_comb, k_comb))

# math.dist()
p = input("Enter p to solve math.dist(p, q): ")
q = input("Enter q to solve math.dist(p, q): ")
print("math.dist(", p , "," , q ,") = " ,math.dist(p, q))

# math.copysign()
x_copysign = float(input("Enter x to solve math.copysign(x, y): "))
y_copysign = float(input("Enter y to solve math.copysign(x, y): "))
print("math.atan2(", x_copysign , "," , y_copysign ,") = " ,math.copysign(x_copysign, y_copysign))

# math.cos()
n = float(input("Enter n to solve math.cos(n): "))
print("math.cos(", n ,") = " ,math.cos(n)) 

# math.gcd()
x = float(input("Enter x to solve math.gcd(x, y): "))
y = float(input("Enter y to solve math.gcd(x, y): "))
print("math.gcd(", x , "," , y ,") = " , math.gcd(x, y)) 

# math.hypot()
list  = input("Enter points to solve math.hypot(list): ")
print("math.hypot(", list ,") = " , math.hypot(list))

# math.isclose()
x = float(input("Enter x to solve math.isclose(x, y): "))
y = float(input("Enter y to solve math.isclose(x, y): "))
print("math.isclose(", x , "," , y ,") = " , math.isclose(x, y)) 

# math.isfinite()
n = float(input("Enter n to solve math.isfinite(n): "))
print("math.isfinite(", n ,") = " , math.isfinite(n)) 

# math.isinf()
n = float(input("Enter n to solve math.isinf(n): "))
print("math.isinf(", n ,") = " , math.isinf(n)) 

# math.isnan()
n = input("Enter a value to check whether a value is NaN or not: ")
print("math.isnana(", n ,") = " , math.isnan(n)) 

# math.isqrt()
n = float(input("Enter n to solve math.isqrt(n): "))
print("math.isqrt(", n ,") = " , math.isqrt(n)) 

# math.ldexp -> return value of x * (2**i)
x = float(input("Enter x to solve math.ldexp(x, i): "))
i = float(input("Enter i to solve math.ldexp(x, i): "))
print("math.ldexp(", x , "," , i ,") = " , math.ldexp(x, i)) 

# math.log2()
n = float(input("Enter n to solve math.log2(n): "))
print("math.log2(", n ,") = " , math.log2(n)) 

# math.lgamma()
n = float(input("Enter n to solve math.lgamma(n): "))
print("math.lgamma(", n ,") = " , math.lgamma(n)) 

# math.log()
x = float(input("Enter x to solve math.log(x, base): "))
base = float(input("Enter base to solve math.log(x, base): "))
print("math.log(", x , "," , base ,") = " , math.log(x, base)) 

# math.isqrt()
n = float(input("Enter n to solve math.isqrt(n): "))
print("math.isqrt(", n ,") = " , math.isqrt(n)) 

# math.log10()
n = float(input("Enter n to solve math.log10(n): "))
print("math.log10(", n ,") = " , math.log10(n)) 

# math.log1p()
n = float(input("Enter n to solve math.log1p(n): "))
print("math.log1p(", n ,") = " , math.log1p(n)) 

# math.perm()
n = float(input("Enter n to solve math.perm(n, k): "))
k = float(input("Enter k to solve math.perm(n, k): "))
print("math.log(", n , "," , k ,") = " , math.log(n, k)) 

# math.pow()
x = float(input("Enter x to solve math.pow(x, y): "))
y = float(input("Enter y to solve math.pow(x, y): "))
print("math.pow(", x , "," , y ,") = " , math.pow(x, y)) 

print("math.sinh(", n ,") = " , math.sinh(n)) 

# math.tan()
n = float(input("Enter n degree to solve math.tan(n): "))
print("math.tan(", n ,") = " , math.tan(n)) 

# math.tanh()
n = float(input("Enter n degree to solve math.tanh(n): "))
print("math.tanh(", n ,") = " , math.tanh(n)) 

# math.sqrt()
n = float(input("Enter n degree to solve math.sqrt(n): "))
print("math.sqrt(", n ,") = " , math.sqrt(n))

# math.prod()
iterable = float(input("Enter x to solve math.prod(iterable, start): "))
start = float(input("Enter y to solve math.prod(iterable, start): "))
print("math.prod(", iterable , "," , start ,") = " , math.prod(iterable, start)) 

# math.radians()
n = float(input("Enter n degree to solve math.radians(n): "))
print("math.radians(", n ,") = " , math.radians(n)) 

# math.reaminder()
x = float(input("Enter x to solve math.reaminder(x, y): "))
y = float(input("Enter y to solve math.reaminder(x, y): "))
print("math.reaminder(", x , "," , y ,") = " , math.reaminder(x, y)) 

# math.sin()
n = float(input("Enter n degree to solve math.sin(n): "))
print("math.sin(", n ,") = " , math.sin(n)) 

# math.sihn()
n = float(input("Enter n degree to solve math.sinh(n): "))

# math.trunc()
n = float(input("Enter n degree to solve math.trunc(n): "))
print("math.trunc(", n ,") = " , math.trunc(n))


#***********************************************************************
# Math Constants

# math.e
print("math.e = " , math.e) 

# math.pi
print("math.pi = " , math.pi)

# math.tau
print("math.tau = " , math.tau)

# math.inf
print("math.inf = " , math.inf)

# math.nan
print("math.nan = " , math.nan)
