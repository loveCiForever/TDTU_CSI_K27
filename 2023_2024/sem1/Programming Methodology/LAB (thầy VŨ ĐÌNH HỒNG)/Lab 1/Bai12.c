
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

signed main()
{   
    float a, b, c;

    printf("Enter three angles to check whether triangle is valid or not: ");
    scanf("%f%f%f", &a, &b, &c);

    if((a + b + c) == 180) printf("The triangle has 3 angle %.2f %.2f %.2f is valid \n", a, b, c);
    else printf("The triangle has 3 angle %.2f %.2f %.2f is unvalid \n", a, b, c);
    
    return 0;
}