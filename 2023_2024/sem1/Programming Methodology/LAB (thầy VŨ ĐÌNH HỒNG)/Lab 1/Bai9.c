
#include <stdio.h>
#include <stdlib.h>

signed main()
{   
    int a, b, c, maxi;
    printf("Enter A, B and C to find the maximum of them: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a >= b) maxi = a;
    else maxi = b;
    if(c >= maxi) maxi = c;

    printf("Maximum of A, B and C = %d \n", maxi);

    return 0;
}