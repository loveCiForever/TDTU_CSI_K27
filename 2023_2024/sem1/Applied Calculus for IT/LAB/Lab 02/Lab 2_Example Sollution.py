
# Exercise 1: Write a Python program to print odd numbers between 50 and 100.
for i in range(50, 101):
	if i%2 != 0:
		print(i)


# Excersize 2: Write a Python program to print the integer numbers which are divisible by 7 and multiple of 5, between 1500 and 2700 (both included).
for i in range(1500, 2701):
	if i %7 == 0 and i %5 == 0: 
		print(i)


# Exercise 3: Write a Python program to prints all the integer numbers from 0 to 20 except 3 and 16. Note : Use 'continue' statement.
for i in range(21):
	if(i == 3 or i == 16):
		continue
	else:
		print(i)

# Exercise 4: 
"""
Write a Python program to to count the number of even and odd numbers from a series of numbers.
Sample numbers : numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]
Expected Output :
Number of even numbers : 5
Number of odd numbers : 4
"""
lst = []
n = int(input("Enter number of elements : "))
 
for i in range(0, n):
    ele = int(input())
    lst.append(ele)  
 
print(lst)
