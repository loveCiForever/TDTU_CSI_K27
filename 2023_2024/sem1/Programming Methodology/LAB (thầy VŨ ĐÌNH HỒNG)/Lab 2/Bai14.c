
#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
{
    int num, res = 0;

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

    for(int i = 1; i < num; i++)
    {
        if(num %i == 0) res += i; 
    }

    if(res == num) printf("%d is a perfect number", num);
    else printf("%d is not a perfect number", num);
    return 0;

}