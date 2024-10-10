
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
    float x, y, res;
    printf("Enter x and y: ");
    scanf("%f %f", &x, &y);

    res = (3 * pow(x, 3) * y - 0.5 * pow(x, 2) + 0.2 * x * y) * 6 * x * pow(y, 3);

    printf("Result of the equation: %.2f", res);
    
    return 0;
}
