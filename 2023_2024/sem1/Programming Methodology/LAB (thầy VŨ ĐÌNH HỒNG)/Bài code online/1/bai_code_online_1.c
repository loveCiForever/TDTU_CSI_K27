
#include <stdio.h>
#include <math.h>

int swap(int a, int b)
{
	if(a > b)
	{
		a += b;
		b = a - b;
		a -= b;
	}
	return a;
	return b;
}
double max(double a, double b)
{
	double max_ab = 0;
	if(a > b) max_ab = a;
	else max_ab = b;
	return max_ab;
}
int GCD(int a, int b)
{
	swap(a, b);
	while(a != 0)
	{
		int tmp = b % a;
		b = a;
		a = tmp;
	}
	return b;
}

int main() 
{
	double a, b;
    scanf("%lf%lf", &a, &b);
    
   	if((a - (int)a == 0) && (b - (int)b == 0))
   	{
   		int res = GCD(a, b);
   		printf("%d", res);
   	}
   	else if((a / b) > 2)
   	{
   		double res = a / b;
   		printf("%lf", res);
   	}
    else
    {
    	double max_ab = max(a, b);
        double f = ((a + b/2) / max_ab);

        printf("%f", f);
    }
    return 0;
}
