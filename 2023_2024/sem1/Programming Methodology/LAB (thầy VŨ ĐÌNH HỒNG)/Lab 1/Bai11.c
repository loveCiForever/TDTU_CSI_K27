
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

signed main()
{   
    char str[100];
    printf("Enter a string to check it is alphanumeric or not: ");
    scanf("%s", str);

    int length = strlen(str);
    int count = 0;

    for(int i = 0; i < length; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'z') count++;
    }

    if(count != length && count != 0) printf("%s is an alphanumeric string", str);
    else printf("%s is not an alphanumeric string", str);

    return 0;
}