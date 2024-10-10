
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

const int MAX_N = 1001;
const long MAX_LN = 1e9 + 1;


int main() 
{
    float x, res = 1;
    printf("Enter X: ");
    scanf("%f", &x);

    if(x < 0)
    	res  = sin(x) * cos(5 * x);
    else if(x == 0)
    	res = pow(5, x);
    else if(x > 0 && x < 5)
    	res = exp(x);
    else
    	res = pow(5, x) / (x + 5);

    printf("Result: %.2f", res);

    return 0;
}
