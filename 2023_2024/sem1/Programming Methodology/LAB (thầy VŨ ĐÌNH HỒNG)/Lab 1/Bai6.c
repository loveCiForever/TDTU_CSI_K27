
#include <stdio.h>
#include <stdlib.h>

signed main()
{   
    float numb, abs_numb;
    printf("Enter an integer number you want to known its absolute value: ");
    scanf("%f", &numb);

    abs_numb = abs(numb);

    printf("The absolute number of %2.f", numb);
    printf(" = %2.f \n", abs_numb);

    return 0;
}