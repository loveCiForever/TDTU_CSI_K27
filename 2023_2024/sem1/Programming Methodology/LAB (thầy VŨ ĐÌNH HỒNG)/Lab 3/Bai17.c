// Declear variables; define constant values. Include library_____________________________________________________
#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.1415926535897932384626433832795l 

void check_perfect_number(int n);

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
    	check_perfect_number(i);
    }

    return 0;
}

// Function Definition____________________________________________________________________________________________
void check_perfect_number(int n)
{
    int res = 0;
    for(int i = 1; i < n; i++)
    {
        if(n %i == 0) res += i;
    }
    if(res == n) printf(" %d ", n);

}   
