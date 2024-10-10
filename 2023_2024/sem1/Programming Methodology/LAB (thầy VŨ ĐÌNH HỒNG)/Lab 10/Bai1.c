
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

#define N 10
const int MAX_N = 1001;
const long MAX_LN = 1e9 + 1;


int main() 
{
	double point_a[N], point_o[N];
	printf("Enter the cordinates of O point: ");
		scanf("%lf %lf", &point_o[0], &point_o[1]); 
	printf("Enter the cordinates of A point: ");
		scanf("%lf %lf", &point_a[0], &point_a[1]);
    double dis = sqrt(pow((point_a[0] - point_o[0]), 2) + pow((point_a[1] - point_o[1]), 2));

    printf("The distance between 2 point A and O: %lf", dis);
    
    return 0;
}
