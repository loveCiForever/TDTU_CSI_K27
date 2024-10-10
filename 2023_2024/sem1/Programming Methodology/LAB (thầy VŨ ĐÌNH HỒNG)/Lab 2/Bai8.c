
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int num, temp;

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

    temp = int(log10(num)) + 1;

    printf("Result is: %d \n", temp);
    return 0;

}