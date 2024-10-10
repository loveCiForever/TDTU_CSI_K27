
#include<stdio.h>
#include<conio.h>
#include<math.h>

int product19(int n)
{
    if(n == 1) return 1;
    else return n * product19(n - 1);

}

int main()
{
    int n, product = 0;

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

    product = product19(n);
    printf("The result is: %d", product);

    return 0;
}