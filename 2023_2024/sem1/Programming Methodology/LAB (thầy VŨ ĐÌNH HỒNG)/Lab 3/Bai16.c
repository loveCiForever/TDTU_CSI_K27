// Declear variables; define constant values. Include library_____________________________________________________
#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.1415926535897932384626433832795l 

void check_arm_num(int n);

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

    for(int i = 2; i <= n; i++)
    {
    	check_arm_num(i);
    }

    return 0;
}

// Function Definition____________________________________________________________________________________________
void check_arm_num(int n)
{
	int nn = n;
	int res = 0;
	int dig = log10(n) + 1;

	while(nn > 0)
	{
		res += pow(nn %10, dig);
		nn /= 10;
	}

	if(res == n) printf("%d ", res);
}