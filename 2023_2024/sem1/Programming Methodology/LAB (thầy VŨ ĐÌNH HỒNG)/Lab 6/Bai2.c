#include <stdio.h>
#include <stdbool.h>

int facto(int n);
void enter_num(int *num);

signed main()
{
	int n;
	enter_num(&n);
	
	int res = facto(n);
	printf("The factorial of %d is: %d", n, res);
	
	return 0;
}

int facto(int n)
{
	if(n == 1)
		return 1;
	else
		return n * facto(n - 1);	
	
}

void enter_num(int *num)
{
    do
    {
        printf("Enter number N (N > 0): ");
        scanf("%d", &*num);
        
        if(*num < 0)
            printf("Nhap sai, nhap lai!\n");
    } while(*num < 0);
}
