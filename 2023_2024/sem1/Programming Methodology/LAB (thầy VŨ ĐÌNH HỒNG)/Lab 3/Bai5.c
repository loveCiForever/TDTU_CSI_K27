// Declear variables; define constant values. Include library_____________________________________________________
#include <stdio.h>
#include <conio.h>
#include <math.h>

void first_and_last(int orinum);

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

	first_and_last(n);
  
    return 0;
}

// Function definition__________________________________________________________________________________________
void first_and_last(int orinum)
{
	int n = orinum;
	int lasti = n % 10;
	int firsti;
	
	while(n >= 10)
	{
		n /= 10;
	}

	firsti = n;
	printf("The first digit of %d is: %d\n", orinum, firsti);
	printf("The last digit of %d is: %d\n", orinum, lasti);

}