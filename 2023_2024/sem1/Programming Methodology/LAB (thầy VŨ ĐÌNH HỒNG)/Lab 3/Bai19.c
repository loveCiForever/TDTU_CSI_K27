// Declear variables; define constant values. Include library_____________________________________________________
#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.1415926535897932384626433832795l 

int fac(int n);

// Main function__________________________________________________________________________________________
signed main() 
{
    int n; 
    while(true)
    {
    	printf("Enter N (N > 0): ");
    	scanf("%d", &n);

    	if(n < 0) continue;
    	else break;
    }

    int res = fac(n);
    printf("The factorial of n is: %d", res);

    return 0;
}

// Function Definition____________________________________________________________________________________________
int fac(int n)
{
    if(n == 1) return 1;
    else return n * fac(n - 1);
}