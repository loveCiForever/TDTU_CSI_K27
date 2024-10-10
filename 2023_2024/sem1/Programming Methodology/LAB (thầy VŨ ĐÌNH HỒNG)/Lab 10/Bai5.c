
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

const int MAX_N = 1001;
const long MAX_LN = 1e9 + 1;

int binary_convert(int n);

int main() 
{
    
   	int n;
   	printf("Enter a number: ");
   	scanf("%d", &n);
   	int bin = binary_convert(n);

   	printf("%d -> %d", n, bin);
    return 0;
}


int binary_convert(int n)
{
	if(n == 0)
		return 0;
	else
		return (n %2 + 10 * binary_convert(n /2));
}