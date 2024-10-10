// Declear variables; define constant values. Include library_____________________________________________________
#include <stdio.h>
#include <conio.h>
#include <math.h>

int prod(int n);

// Main function__________________________________________________________________________________________
signed main() 
{
	int n;
	while(true)
	{
		printf("Enter n (n > 0): ");
		scanf("%d", &n);
		if(n > 0) break;
		else continue;
	}
    
    int res = prod(n);
    printf("Sum of all digit of %d is %d", n, res);

    return 0;
}

// Function definition__________________________________________________________________________________________
int prod(int n)
{
	int res = 1;
	int temp = n;
	while(true)
	{
		if(temp < 10)
		{
			res *= temp;
			break;
		}
		else
		{
			res *= (temp % 10);
			temp /= 10;
		}
	}
	return res;
}