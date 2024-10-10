
// Declear variables; define constant values. Include library_____________________________________________________
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

const int MAX_N = 1001;
const long MAX_LN = 1e9 + 1;

int sumOfevenNum_usingloop(int n);

// Main function__________________________________________________________________________________________________
signed main() 
{
	int n;
	int sum = 0;

	while(true)
	{
		printf("Enter n (n > 0): ");
		scanf("%d", &n);
		if(n > 0) break;
		else continue;
	}
    
	sum = sumOfevenNum_usingloop(n);
	printf("The sum of all even number is: %d", sum);

    return 0;
}

// Function Definition____________________________________________________________________________________________
int sumOfevenNum_usingloop(int n)
{
	int sum = 0;
	for(int i = 2; i <= n; i++)
	{
		if(i %2 == 0) sum += i;
	}
	return sum;
}


