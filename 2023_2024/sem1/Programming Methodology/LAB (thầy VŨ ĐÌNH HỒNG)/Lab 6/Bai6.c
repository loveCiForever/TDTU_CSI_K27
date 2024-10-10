#include <stdio.h>
#include <stdbool.h>

int ex_a(int n);
float ex_b(int n);
int ex_c(int n);
float ex_d(int n);
int ex_e(int n);

signed main()
{
	int n;
	enter_n(&n);
	
	int res_a = ex_a(n);
	float res_b = ex_b(n);
	int res_c = ex_c(n);
	float res_d = ex_d(n);
	int res_e = ex_e(n);
	
	printf("Result A = %d\n", res_a);
	printf("Result B = %.3f\n", res_b);
	printf("Result C = %d\n", res_c);
	printf("Result D = %.3f\n", res_d);
	printf("Result E = %d\n", res_e);
					
	return 0;
}

int facto(int n)
{
	if(n == 1)
		return 1;
	else
		return n * facto(n - 1);
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

int ex_a(int n)
{
	if(n == 1)
		return 3;
	else
		return (2*n + 1) + ex_a(n - 1);
}

float ex_b(int n)
{
	if(n == 1)
		return (float)n / 2;
	else
		return ((float)n / 2) + ex_b(n - 1);
}

int ex_c(int n)
{
	if(n == 1)	
		return 1;
	else
		return facto(n) + ex_c(n - 1);
}

float ex_d(int n)
{
	if(n == 1)
		return (float)sqrt(n);
	else
		return (float)sqrt(n) + ex_d(n -1);
}

int ex_e(int n)
{
	if(n == 1)
		return 1;
	else
		return facto(n) * ex_e(n - 1);
}
