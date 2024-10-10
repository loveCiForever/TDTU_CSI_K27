
#include<stdio.h>
#include<conio.h>

int main()
{
    int n, temp, res = 0;

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

    temp = n;

    while(true)
    {   
        if(temp < 10) 
        {
            res += temp;
            break; 
        }        
        else 
        {   
            res += (temp % 10);
            temp /= 10;
        }   
    }
    printf("Sum of digits of n: %d", res);
    
    return 0;

}