
#include <stdio.h>

signed main()
{   
    // We have that 1 year = 12 months, 1 month = 4 weeks, 1 week = 7 days
    // Ignore leap year

    float day; 
    float week, month, year;

    printf("Enter days to convert: ");
    scanf("%f", &day);

    week = (day / 7 );
    month = (day / 30);
    year = (day / 365);

    printf("Week = %.2f \n" , week);
    printf("Month = %.2f \n" , month);
    printf("Year = %.2f \n" , year);

    return 0;
}