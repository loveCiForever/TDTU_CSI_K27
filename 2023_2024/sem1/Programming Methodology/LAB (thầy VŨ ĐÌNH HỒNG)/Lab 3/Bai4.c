// Declear variables; define constant values. Include library_____________________________________________________
#include <stdio.h>
#include <conio.h>
#include <math.h>

int sum(int n);

// Main function__________________________________________________________________________________________
signed main() 
{	
	int n;
	while(true)
	{
		printf("Enter N: ");
		scanf("%d", &n);

		if(n > 0) break;
		else continue;
	}
	
	int suma = sum(n);
	printf("The sum of all natural numbers from 1 to %d is: %d", n, suma); 

    
    return 0;
}

// Function definition__________________________________________________________________________________________
int sum(int n)
{
	if(n %2 == 0) return (n + 1) * (n / 2);
	else return n * (n / 2) + n;
}