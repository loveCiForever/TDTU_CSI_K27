// Declear variables; define constant values. Include library_____________________________________________________
#include <stdio.h>
#include <conio.h>
#include <math.h>

int swap(int n);

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

	int res = swap(n);
	printf("The Swapped number of %d is %d", n, res);
 
    return 0;
}

// Function definition__________________________________________________________________________________________
int swap(int n)
{
	int res;
	int tmp = n;
	int tempo = pow(10, int(log10(n)));

	res = n % 10; 
	res *= tempo; 
	res += (tmp % tempo); 
	res -= (n % 10);
	res += tmp / tempo;

	return res;
}
