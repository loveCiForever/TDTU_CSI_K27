// Declear variables; define constant values. Include library_____________________________________________________
#include <stdio.h>
#include <conio.h>

int sumOfoddNum_usingloop(int n);

// Main function__________________________________________________________________________________________
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
    
	sum = sumOfoddNum_usingloop(n);
	printf("The sum of all odd number is: %d", sum);

    return 0;
}

// Function Definition____________________________________________________________________________________________
int sumOfoddNum_usingloop(int n)
{
	int sum = 0;
	for(int i = 1; i <= n; i++)
	{
		if(i %2 != 0) sum += i;
	}
	return sum;
}