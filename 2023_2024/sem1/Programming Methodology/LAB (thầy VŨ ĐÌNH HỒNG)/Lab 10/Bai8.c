
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

int recur(int n);


int main() 
{
    int n;

    do
    {
    	printf("Enter N:");
  		scanf("%d", &n);
  		if(n < 0)
  			printf("Invalid input\n");
    } while(n < 0);


    printf(" %d", recur(n));

    return 0;
}

int recur(int n)
{
    if(n == 0)
        return 1;
    else if(n == 1)
        return 2;
    else if(n >= 1)
        return 2 * recur(n - 1) + 3 * recur(n - 2);
}