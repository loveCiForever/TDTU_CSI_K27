
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

const int MAX_N = 1001;
const long MAX_LN = 1e9 + 1;

double s1(float n);
double s2(float n);
double s3(float n);
double s4(float n);
double s5(float n);

int main() 
{	
	float a;
	double res;

    while(true)
	{	
		printf("Enter N (N > 0): ");
   	 	scanf("%f", &a);
		if(a > 0)
		{
			printf("Valid number\n");
			break;
		}
		else
			printf("Invalid number. Pease enter again\n");
	}

	res = s1(a);
	printf("Result S1 = %.4lf\n", res);
	res = s2(a);
	printf("Result S2 = %.4lf\n", res);
	res = s3(a);
	printf("Result S3 = %.4lf\n", res);
	res = s4(a);
	printf("Result S4 = %.4lf\n", res);
	res = s5(a);
	printf("Result S5 = %.4lf\n", res);

    return 0;
}

double s1(float n)
{	
	int i;
	double res = 0;
	for(i = 1; i <= n ; i++)
	{ 
		res += ((i + 1) / sqrt(i));
	}

	return res;
}

double s2(float n)
{
	if(n == 1)
		return 1;
	else 
		return n + s2(n - 1);
}

double s3(float n)
{
    if(n == 1)  
        return 1;
    else
        return 1/n + s3(n - 1);
}

double s4(float n)
{
	if(n == 1)
		return 1;
	else
		return n * s4(n - 1);
}

double s5(float n)
{	
	int i;
	double res = 0;
	for(i = 1; i <= n; i++)
	{ 
		res += (float)(pow(-1, i)) / i;
	}
	return res;
}