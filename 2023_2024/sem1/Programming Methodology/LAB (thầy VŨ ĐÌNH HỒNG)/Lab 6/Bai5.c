#include <stdio.h>
#include <stdbool.h>



signed main()
{
	int n;
	enter_n(&n);
	
	int res = count_digits(n);
	printf("Result: %d digits", res);
	return 0;
}

int count_digits(int n)
{
	if(n <= 9)
		return 1;
	else
		return 1 + count_digits(n / 10);
}

void enter_n(int *n)
{
    do
    {
        printf("Enter n: ");
        scanf("%d", &*n);
        if(*n < 0)
            printf("Enter again!\n");
    } while (*n < 0);
}
