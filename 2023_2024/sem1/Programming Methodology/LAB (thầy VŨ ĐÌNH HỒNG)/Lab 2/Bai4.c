
#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    int sumFOR = 0;
    int sumWHILE = 0;
    int sumDOW = 0;

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

    for(int i = 0; i <= n; i ++) sumFOR += i;
    printf("Sum of all natural numbers between 1 to n using FOR loop: %d \n", sumFOR);
    
    int temp1 = 1;
    while(temp1 <= n)
    {
        sumWHILE += temp1;
        temp1++;
    }
    printf("Sum of all natural numbers between 1 to n using WHILE loop: %d \n", sumWHILE);

    int temp2 = 1;
    do
    {
        sumDOW += temp2;
        temp2++;
    }
    while(temp2 <= n);
    printf("Sum of all natural numbers between 1 to n using DO WHILE loop: %d \n", sumDOW);

    return 0;

}