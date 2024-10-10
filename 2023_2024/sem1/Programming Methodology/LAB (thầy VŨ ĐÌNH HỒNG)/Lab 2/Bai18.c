
#include <stdio.h>
#include <conio.h>
#include <math.h>

signed main() 
{
    int n, bin = 0;

    while(true)
    {
        printf("Enter n (n > 0): ");
        scanf("%d", &n);
        if(n > 0) break;
        else 
        {   
            printf("INVALID INPUT, PLEASE ENTER AGAIN!!!\n");
            continue;
        }
    }

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
    return 0;
}

/* TEST CASE

*/