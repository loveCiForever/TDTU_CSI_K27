
// Declear variables; define constant values. Include library_____________________________________________________
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

const int MAX_N = 1001;
const long MAX_LN = 1e9 + 1;


li factorial(int n);
void enter_input(int *n);
void func_1a(int *n);
void func_1b(int *n);
void func_1c(int *n);
void func_1d(int *n);
void func_1e(int *n);

// Main function__________________________________________________________________________________________________
signed main() 
{
	int n;

	enter_input(&n);
	func_1a(&n);
	func_1b(&n);
	func_1c(&n);
	func_1d(&n);
	func_1e(&n);

    return 0;
}

// Function definition____________________________________________________________________________________________
void enter_input(int *n)
{
	while(true)
    {
        printf("Enter N (N > 0): ");
        scanf("%d", &*n);

        if(*n > 0) break;
        else printf("[INVALID INPUT] Please enter again.\n");
    }
}

li factorial(int n)
{
	if(n == 1) return 1;
	else return n * factorial(n - 1);
}

void func_1a(int *n)
{
	db sum = 0;
	for(int i = 1; i <= *n; i++)
	{
		sum += (db)i / 2;
	}

	printf("The result of Ex.1a (with n = %d) is: %.5lf\n", *n, sum);
}

void func_1b(int *n)
{
	li sum = 0;
	for(int i = 1; i <= *n; i++)
	{
		sum += (2*i + 1);
	}
	printf("The result of Ex.1b (with n = %d) is: %ld\n", *n, sum);
}

void func_1c(int *n)
{
	li sum = 0;
	for(int i = 1; i <= *n; i++)
	{
		sum += (factorial(i) + 1);
	}
	printf("The result of Ex.1c (with n = %d) is: %ld\n", *n, sum);
}

void func_1d(int *n)
{
	li prod = 1;
	for(int i = 1; i <= *n; i++)
	{
		prod *= factorial(i);
	}
	printf("The result of Ex.1d (with n = %d) is: %ld\n", *n, prod);
}

void func_1e(int *n)
{
	db prod = 1;
	for(int i = 1; i <= *n; i++)
	{
		prod *= (db) (2 * i) / 3;
	}
	printf("The result of Ex.1d (with n = %d) is: %lf\n", *n, prod);
}


/* TEST CASE
3

3.00000
15
12
12
1.77778
*/