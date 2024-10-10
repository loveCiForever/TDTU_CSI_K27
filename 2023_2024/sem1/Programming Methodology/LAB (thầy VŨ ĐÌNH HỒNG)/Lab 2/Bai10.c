
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int num, temp, res;

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

    while(num != 0)
    {
        temp = num % 10;
        res = res * 10 + temp;
        num /= 10;
    }

    printf("The revesre of n is: %d", res);

    return 0;
}