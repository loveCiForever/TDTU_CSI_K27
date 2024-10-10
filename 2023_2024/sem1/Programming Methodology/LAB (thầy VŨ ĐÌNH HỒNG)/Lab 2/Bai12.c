
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int orinum, kt = 0;

    while(true)
    {
        printf("Enter n (n > 0): ");
        scanf("%d", &num);
        if(num > 0) break;
        else 
        {   
            printf("INVALID INPUT, PLEASE ENTER AGAIN!!!\n");
            continue;
        }
    }

    orinum = num;

    if (orinum < 2) kt++;
    else 
    {
        for (int i = 2; i <= sqrt(orinum); i++) 
        {
            if (orinum % i == 0) kt++;
        }
    }

    if(kt == 0) printf("%d is a prime number ", orinum);
    else printf("%d is not a prime number ", orinum);
    
    return 0;
}