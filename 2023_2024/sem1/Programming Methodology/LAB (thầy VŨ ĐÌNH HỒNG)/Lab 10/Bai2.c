
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


int main() 
{
    double perimeter, area, radius;
    printf("Enter the perimeter of the circle: ");
    	scanf("%lf", &perimeter);

	radius = perimeter / (2 * PI);
	area = PI * radius * radius;

	printf("The area of the circle: %lf", area);

    return 0;
}
