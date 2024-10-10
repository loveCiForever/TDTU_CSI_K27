#523H0140 Nguyen Quang Huy

import itertools

# Ex 1
digits = list(range(0, 10))
k = 4

num_code = list(itertools.permutations(digits, k)) 

# When the code has the first digit be '0' 
# the code will be remove
# example: 0123 -> 123 -> it's not a 4 digits number -> continue
#          4123 -> 4123 -> it's a 4 digits number -> remove
for i in num_code[::-1]:
    if(i[0] == 0):
        num_code.remove(i)

code_length = len(num_code)

print("Ex 1. Code lenth = ", code_length)

# Ex 2
A = list(range(1, 6))
k = 3
A_length = len(A)

num_3_digit = list(itertools.permutations(A, k))
num_length = len(num_3_digit)
print(end="\n")

print("Ex 2.")
print(" %i-Permutaion of %s: " %(k, A))
for i in num_3_digit:
    # count = 0
    # if count %10 == 0:
        print(" ", i, end="\n")
#     else: 
#         print(" ", i)
#     count += 1
# print(count, end="\n")

print(" Num length: %i" %(num_length), end="\n")

# Ex 3:
def cross(A, B):
     return {a + b for a in A for b in B}

urn = cross('W', '12345678') | ('B', '123456') | ('R', '123456789')
k = 3

U3 = list(itertools.combinations(urn, k))
U3_length = len(U3)

print(U3)
print(U3_length)