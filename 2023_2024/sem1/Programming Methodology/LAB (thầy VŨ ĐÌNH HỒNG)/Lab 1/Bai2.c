
#include <stdio.h>

signed main()
{   
    int a, b;
    int sum = 0;
    int sub = 0;
    int multi = 0;
    float div = 0;
    float mod = 0;

    printf("Enter 2 interger numbers A and B: ");
    scanf("%d%d", &a, &b);

    sum = a + b;
    sub = a - b;
    multi = a * b;
    div = a / b;
    mod = a % b;

    printf("A + B = %d \n", sum );
    printf("A - B = %d \n", sub);
    printf("A * B = %d \n", multi);
    printf("A / B = %.3f \n", div);
    printf("A mod B = %.3f \n", mod);
    
    return 0;
}