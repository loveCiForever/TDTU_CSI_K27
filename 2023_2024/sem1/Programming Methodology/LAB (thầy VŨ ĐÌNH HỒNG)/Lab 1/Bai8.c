
#include <stdio.h>
#include <stdlib.h>

signed main()
{   
    float a, b, maxi;
    printf("Enter A and B to find the maximum of them: ");
    scanf("%f%f", &a, &b);

    if(a >= b) maxi = a;
    else maxi = b;

    printf("Maximum of A and B = %2.f \n", maxi);

    return 0;
}