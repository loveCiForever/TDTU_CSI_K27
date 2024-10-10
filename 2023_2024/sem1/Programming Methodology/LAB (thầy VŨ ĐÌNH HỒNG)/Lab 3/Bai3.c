// Declear variables; define constant values. Include library_____________________________________________________
#include <stdio.h>
#include <conio.h>
#include <math.h>

void table(int n);

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

	table(n);
	return 0;

}

// Function definition__________________________________________________________________________________________
void table(int n)
{
	int res;
	printf("Table of %d \n", n);

    for(int j = 1; j <= 10; j++)
    {
        res = n * j;
        printf("%d x %d = %d \n", n , j, res);
    }
    printf("\n");	
}