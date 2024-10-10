#include <stdio.h>

void enter_n(int *n);
void enter_x(int *x);
int cal(int x, int n);

signed main()
{
    int x;
    enter_x(&x);
    
    int n;
    enter_n(&n);
    
    printf("%d^%d = %d", x, n, cal(x,n));
    return 0;
}

void enter_n(int *n)
{
    do
    {
        printf("Enter n: ");
        scanf("%d", &*n);
        if(*n < 0)
            printf("Enter again!\n");
    } while (*n < 0);
}

void enter_x(int *x)
{
    do
    {
        printf("Enter x: ");
        scanf("%d", &*x);
        if(*x <= 0)
            printf("Enter again!\n");
    } while (*x <= 0);
}

int cal(int x, int n)
{
    if(n == 0)
        return 1;
    return x * cal(x, n-1);
}
