
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

    for(int i = 0; i <= n; i += 2) sumFOR += i;
    printf("Sum of all even numbers between 1 to n using FOR loop: %d\n", sumFOR);
    
    int temp1 = 1;
    while(temp1 <= n)
    {
        if(temp1 %2 == 0) sumWHILE += temp1;
        temp1++;
    }
    printf("Sum of all even numbers between 1 to n using WHILE loop: %d\n", sumWHILE);

    int temp2 = 1;
    do
    {
        if(temp2 %2 == 0) sumDOW += temp2;
        temp2++;
    }
    while(temp2 <= n);
    printf("Sum of all even numbers between 1 to n using DO WHILE loop: %d\n", sumDOW);

    return 0;

}