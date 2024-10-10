
#include <stdio.h>

signed main()
{   
    float height, length, area, perimeter;

    printf("Enter height and length of the rectangle: ");
    scanf("%f%f", &height, &length);

    area = height * length;
    perimeter = (height + length) * 2;

    printf("Area of the rectangle = %.2f \n", area);
    printf("Perimeter of the rectangle = %.2f \n", perimeter);

    return 0;
}