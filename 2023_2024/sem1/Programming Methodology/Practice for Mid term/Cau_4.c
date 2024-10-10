
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

const int MAX_N = 1001;
const long MAX_LN = 1e9 + 1;

bool check_valid_triangle(double *a, double *b, double *c);
double area_triangle(double *a, double *b, double *c);
double circumference_triangle(double *a, double *b, double *c);
void check_type_triangle(double *a, double *b, double *c);

int main() 
{
	double a, b, c;

	printf("Enter three sides of the triangle: ");
	scanf("%lf%lf%lf", &a, &b, &c);

	if(check_valid_triangle(&a, &b, &c))
		printf("\t[Valid triangle]\n");
	else 
	{
		printf("\t[Invlid triangle]\n");
		return 0;
	}

	printf("The area of the triangle: %.2lf\n", area_triangle(&a, &b, &c));
	printf("The circumference of the triangle: %.2lf\n", circumference_triangle(&a, &b, &c));

	check_type_triangle(&a, &b, &c);


    
    return 0;
}

bool check_valid_triangle(double *a, double *b, double *c)
{
	if((*a + *b) > *c) 
		return true;
	else
		return false;

}

double area_triangle(double *a, double *b, double *c)
{
	double p = 0.5 * (*a + *b + *c);
	double area = sqrt(p * (p - *a) * (p - *b) * (p - *c));
	return area;

}
double circumference_triangle(double *a, double *b, double *c)
{
	double cir = *a + *b + *c;
	return cir;
}

void check_type_triangle(double *a, double *b, double *c)
{
	if(*a == *b || *a == *c || *b == *c)
	{
		if(*a == *b && *a == *c)
			printf("Equilateral triangle\n");
		else
			printf("Isosceles triangle triangle\n");
	}
	else if(pow(*a, 2) == pow(*b, 2) + pow(*c, 2) || pow(*b, 2) == pow(*a, 2) + pow(*c, 2) || pow(*c, 2) == pow(*b, 2) + pow(*a, 2))
		printf("Right triagle\n");
	else
		printf("Normal triangle\n");
}



