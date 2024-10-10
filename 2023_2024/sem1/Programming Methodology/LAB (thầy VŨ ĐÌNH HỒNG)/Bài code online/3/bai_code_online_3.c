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
const long MAX_LN = 1e5;


int main() 
{
	double temp;
	double arr[MAX_LN];
	double sum = 0;
	
	long count = 0;
	long i = 0;

	bool pos = true;

	do
	{
		scanf("%lf", &temp);
		if(i == 0 && temp == 0)
			pos = false;
		else if(temp != 0)
		{
			arr[i] = temp;
			sum += temp;
			count++;
			i++;
		}

	} while(temp != 0);

	double ave = sum/ count;
	double var = 0;
	double res = 0;

	for(i = 0; i < count; i++)
		var += pow(arr[i] - ave, 2);

	var /= count;
	res = sqrt(var);
    
	if(pos == false)
		printf("0");
	else
    	printf("%.6lf", res);

    return 0;
}