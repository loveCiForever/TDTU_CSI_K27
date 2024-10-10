
#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 1, res, i = 0, j;
    printf("Table from 1 to 10\n\n");

    while(i < 10)
    {
        printf("Table of %d = ", num);
        for(j = 1; j <= 10; j++)
        {
            res = num * j;
            printf("%d ", res);
        }
        printf("\n");

        num++;
        i++;
    }

    return 0;

}