// Declear variables; define constant values. Include library_____________________________________________________
#include <stdio.h>
#include <conio.h>
#include <math.h>

void reversed_number(int nn);

// Main function__________________________________________________________________________________________________
signed main() 
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

	reversed_number(n);
    
    return 0;
}

// Function Definition____________________________________________________________________________________________
void reversed_number(int nn)
{
	int res = 0;
	int n = nn;
	int temp;
	while(n != 0)
	{
		temp = n % 10;
        res = res * 10 + temp;
        n /= 10;
	}
	printf("The reversed number of %d is %d", nn, res );
}
