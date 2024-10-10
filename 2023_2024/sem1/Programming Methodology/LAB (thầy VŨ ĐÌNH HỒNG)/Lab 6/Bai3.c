#include <stdio.h>
#include <stdbool.h>

int cal_exp(int n);
void enter_num(int *num);

signed main()
{
	int n;
	enter_num(&n);
	
	int res = cal_exp(n);
	printf("The result is: %d", res);
	
	return 0;
}

int cal_exp(int n)
{
	if(n == 0)
		return 1;
	else
		return 2 * cal_exp(n - 1);	
	
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
