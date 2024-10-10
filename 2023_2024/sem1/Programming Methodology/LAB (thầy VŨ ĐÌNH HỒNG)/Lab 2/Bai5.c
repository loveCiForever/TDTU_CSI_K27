
#include<stdio.h>
#include<conio.h>

int main()
{
    int num, last, first, temp;

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
    
    temp = num;
    last = num % 10;

    while(temp >= 10)
    {
        temp /= 10;
    }

    first = temp;

    printf("The first digit of n is: %d \n", first);
    printf("The last digit of n is: %d \n", last);
    
    return 0;

}