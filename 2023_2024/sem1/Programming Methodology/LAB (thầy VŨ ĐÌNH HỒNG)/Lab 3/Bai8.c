// Declear variables; define constant values. Include library_____________________________________________________
#include <stdio.h>
#include <conio.h>
#include <math.h>

int number_of_digit(int n);

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

	int res = number_of_digit(n);
	printf("Number of digit of %d is %d", n, res );

    return 0;
}

// Function definition__________________________________________________________________________________________
int number_of_digit(int n)
{
	int count = 0;
	while(n > 10)
	{
		n /= 10;
		count ++;
	}
	return count + 1;
}