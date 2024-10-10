
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int num, orinum, temp = 0, res = 0;

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

    while(num != 0)
    {
        temp = num % 10;
        res = res * 10 + temp;
        num /= 10;
    }
    
    if(res == orinum) printf("%d is a palindrome number:", orinum);
    else printf("%d is not a palindrome number:", orinum);

    return 0;
}