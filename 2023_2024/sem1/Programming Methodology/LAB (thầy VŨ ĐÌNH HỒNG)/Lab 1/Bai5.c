
#include <stdio.h>

signed main()
{   
    float tempC, tempF;

    printf("Enter the tempurature in Celsius: ");
    scanf("%f" , &tempC);

    tempF = (tempC * 9/5) + 32;

    printf("%2.f ", tempC);
    printf("C degree ");
    printf("= %2.f " , tempF);
    printf("F degree \n");

    return 0;
}