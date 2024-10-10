
// Base on mathsisfun.com

#include <stdio.h>
#include <stdlib.h>

signed main()
{   
    int year;
    printf("Enter a year you want to check: ");
    scanf("%d", &year);

    if (year % 4 == 0)printf("%d is a leap year. \n", year);
    else if (year % 100 == 0) printf("%d is not a leap year.\n", year);
    else if (year % 400 == 0)  printf("%d is a leap year.\n", year);
    else printf("%d is not a leap year.\n", year);

    return 0;
}