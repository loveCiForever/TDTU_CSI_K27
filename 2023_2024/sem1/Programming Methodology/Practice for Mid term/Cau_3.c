
#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

const int N = 10;
const int MAX_N = 1001;
const long MAX_LN = 1e9 + 1;


int main() 
{
	double point_O[N], point_A[N];
	double radical, dA_O;

	printf("Enter the coordinate of O: ");
		scanf("%lf %lf", &point_O[0], &point_O[1]);
	printf("Enter the coordinate of A: ");
    	scanf("%lf %lf", &point_A[0], &point_A[1]);
    printf("Enter the radical of the circle with center point O(%.2lf, %.2lf): ", point_O[0], point_O[1]);
    	scanf("%lf", &radical);

    dA_O = sqrt(pow((point_O[0] - point_A[0]), 2) + pow((point_O[1] - point_A[1]), 2));
    
    if(dA_O > radical) 	
    	printf("The point A(%.2lf, %.2lf) is out of the circle with center point O(%.2lf, %.2lf)", point_A[0], point_A[1], point_O[0], point_O[1]);
    else if(dA_O == radical)
    	printf("The point A(%.2lf, %.2lf) is on the circle with center point O(%.2lf, %.2lf)", point_A[0], point_A[1], point_O[0], point_O[1]);
    else
    	printf("The point A(%.2lf, %.2lf) is in the circle with center point O(%.2lf, %.2lf)", point_A[0], point_A[1], point_O[0], point_O[1]);
    return 0;
}
