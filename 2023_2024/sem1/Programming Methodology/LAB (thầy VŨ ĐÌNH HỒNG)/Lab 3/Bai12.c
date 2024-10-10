// Declear variables; define constant values. Include library_____________________________________________________
#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.1415926535897932384626433832795l 

bool check_prime(int n);

// Main function__________________________________________________________________________________________________ 
signed main() 
{	
	int n;

    while(true)
    {
        printf("Enter N (N > 0): ");
        scanf("%d", &n);

        if(n > 0) break;
        else continue;        
    }

    if(check_prime(n)) printf("%d is a prime number", n);
    else printf("%d is not a prime number", n);

    
    return 0;
}

// Function Definition____________________________________________________________________________________________
bool check_prime(int n)
{
	bool pos = true;
	if(n < 2) pos = false;
	else
	{	
		for(int i = 2; i < n; i++)
		{
			if(n %i == 0) 
				{
					pos = false; 
					break;
				}
			else pos = true;
		}
	}
	return pos;
}