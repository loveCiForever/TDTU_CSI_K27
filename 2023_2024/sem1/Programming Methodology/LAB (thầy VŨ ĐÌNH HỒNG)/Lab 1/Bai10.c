
#include <stdio.h>
#include <stdlib.h>

signed main()
{   
    int n;
    printf("Enter a number to check it is even or odd: ");
    scanf("%d", &n);

    if(n %2 == 0) printf("%d is Even \n", n);
    else printf("%d is Odd \n" , n);

    return 0;
}