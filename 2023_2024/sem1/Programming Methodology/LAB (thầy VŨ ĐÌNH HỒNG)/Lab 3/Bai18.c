// Declear variables; define constant values. Include library_____________________________________________________
#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.1415926535897932384626433832795l 

void bi_conv(int n);

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
    bi_conv(n);

    return 0;
}


// Function Definition____________________________________________________________________________________________
void bi_conv(int n)
{   
    int bin = 0;
    int dec = n;
    int count = 0;
    int bit = 0;

    while(dec > 0)
    {
        bit = dec % 2;
        bin +=  bit * pow(10, count);
        count++;
        dec /= 2;
    }

    printf("The binary type of %d is: %d", n, bin);
}