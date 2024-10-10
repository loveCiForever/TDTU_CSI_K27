import math as mt
import numpy as np
import sympy as sp
import matplotlib.pyplot as plt

x_values = np.linspace(-1000, 1000, 500)
x, x0, y0, t = sp.symbols('x, x0, y0, t')
A = 30

# Task 1___________________________________________________________________
# _____1.a_________________________________________________________________

# Nhập vào 2 hàm số f(x) và g(x) và cho f(x) và g(x) thành 2 biểu thức chứa x
f = x**2 - 2*A*x - A**2
g = -(x**2) + 4*A*x + A**3

f_lamb = lambda x: x**2 - 2*A*x - A**2
g_lamb = lambda x: -(x**2) + 4*A*x + A**3

plt.plot(x_values, f_lamb(x_values), label = 'f(x)', color = 'blue')
plt.plot(x_values, g_lamb(x_values), label = 'g(x)', color = 'red')

# Phương trình hoành độ giao điểm: y = f(x) - g(x)
pt_hd_gd_a = 2*(x**2) - 6*A*x - A**2 - A**3

# Tính delta của y = f(x) - g(x) và nghiệm của phương trình hoành độ giao điểm 
delta_a = (-6*A)**2 - 4*2*(-A**2 - A**3)

x1_a = -((-6*A) + mt.sqrt(abs(delta_a))) / (2*2)
x2_a = -((-6*A) - mt.sqrt(abs(delta_a))) / (2*2)

plt.plot(x1_a, f_lamb(x1_a), color = 'green', marker = 'o')
plt.plot(x2_a, f_lamb(x2_a), color = 'green', marker = 'o')

print('1a. Intersection point 1:(', x1_a, ',',f_lamb(x1_a),')')
print('1a. Intersection point 2:(', x2_a, ',',f_lamb(x2_a),')')

# Đặt nhãn tên cho đồ thị, căn chỉnh cú thích và vẽ tất cả các hàm đã gọi.
plt.title('Question 1a')
plt.legend(loc = 'center right')
plt.show()

# _____1.b__________________________________________________________________
df = sp.diff(f, x)
slope = df.subs(x, 0)

f_shifted_lamb = lambda x: x**2 - 2*A*x - A**2 - 4*(A**3)
f_shifted = x**2 - 2*A*x - A**2 - 4*(A**3)

y_tangentline_lamb = lambda x: slope * (x - 0) - A**2
y_tangentline = slope * (x - 0) - A**2

pt_hd_gd_b = x**2 - (2*A*x + slope*x) - 4*(A**3)
delta_b = (-(2*A*x + slope*x))**2 - 4*(-4*(A**3))

# Tìm 2 điểm mà Phương trình tiếp tuyến của f(x) cắt qua Shifted f(x), y_func_shifted = y_tangent_line
x1_b = ((2*A*x + slope*x) + mt.sqrt((delta_b))) / 2
x2_b = ((2*A*x + slope*x) - mt.sqrt((delta_b))) / 2

plt.plot(x_values, f_lamb(x_values), label = 'f(x)', color = 'blue')
plt.plot(x_values, y_tangentline_lamb(x_values), label = 'tangent line to f(x)', color = 'gold')
plt.plot(x_values, f_shifted_lamb(x_values), label = 'shifted f(x)', color = 'darkorange')

plt.plot(0, -A**2, color = 'green', marker = 'o')
plt.plot(x1_b, f_shifted_lamb(x1_b), color = 'black', marker = 'o')
plt.plot(x2_b, f_shifted_lamb(x2_b), color = 'black', marker = 'o')

print('1b. Intersection point 1:(', x1_b, ',',f_shifted_lamb(x1_b),')')
print('1b. Intersection point 2:(', x2_b, ',',f_shifted_lamb(x2_b),')')

plt.title('Question 1b')
plt.legend(loc = 'upper center')
plt.show()

# _____1.c_______________________________________________________________________
x0, y0 = 0, -4*(A**3)

# Tìm nghiệm của 2 điểm tiếp xúc giữa tiếp tuyến của f(x) mà đi qua điểm A(0, -4*A**3), y - y(x0) = y(x0)' * (x - x0), với x = 0
y = -x**2 + -A**2 + 4*(A**3)
x1 = -(mt.sqrt(-A**2 + 4*(A**3)))
y1 = (f.subs(x, x1))
x2 = (mt.sqrt(-A**2 + 4*(A**3)))
y2 = (f.subs(x, x2))

a1 = (y0 - y1) / (x0 - x1) 
a2 = (y0 - y2) / (x0 - x2) 

b1 = y1 - a1 * x1
b2 = y2 - a2 * x2

tangent1_lamb = lambda x: a1*x + b1
tangent2_lamb = lambda x: a2*x + b2

plt.plot(x_values, f_lamb(x_values), label = 'f(x)', color = 'blue')
plt.plot(x_values, tangent1_lamb(x_values), label = 'tangent line 1', color = 'darkorange')
plt.plot(x_values, tangent2_lamb(x_values), label = 'tangent line 2', color = 'darkorange')

plt.plot(0, -(A**3)*4, color = 'green', marker = 'o')
plt.plot(x1, f_lamb(x1), color = 'black', marker = 'o')
plt.plot(x2, f_lamb(x2), color = 'black', marker = 'o')

print('1c. Equation of the tangent line 1 to the curve f(x):', a1*x + b1)
print('1c. Equation of the tangent line 2 to the curve f(x):', a2*x + b2)

plt.title('Question 1c')
plt.legend(loc = 'center right')
plt.show()