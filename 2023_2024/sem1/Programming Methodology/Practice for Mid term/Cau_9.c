
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

const int MAX_N = 1001;
const long MAX_LN = 1e9 + 1;

void reverse_num(int *n);

int main() 
{
	double n = 9881;
	int n_i = n;


	reverse_num(&n_i);


    return 0;
}

void reverse_num(int *n)
{
	int num = *n;
	int res = num % 10;
		num /= 10;

	while(num != 0)
	{
		res = (res * 10 + (num / 10) % 10);
	}

	printf("The reversed number of %d is: %d\n", *n, res);
}