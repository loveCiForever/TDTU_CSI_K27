
#include <stdio.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

const int MAX_N = 1001;
const long MAX_LN = 1e9 + 1;


int main() 
{
	int m, h, res = 0;
	printf("Enter the working hours: ");
	scanf("%d", &h);
	printf("Enter the standard income: ");
    scanf("%d", &m);

    if(h <= 40)
    	res = h * m;
    else if(h > 40 && h <= 45)
    	res = 40 * m + (h - 40) * m * 1.8;
    else if(h > 45 && h <= 50)
    	res = 40 * m + 5 * m * 1.8 + (h - 45) * m * 2.5;
    else 
    	res = 40 * m + 5 * m * 1.8 + 5 * m * 2.5 + (h - 50) * m * 2.6;

    printf("Total money get: %d", res);

    return 0;
}
