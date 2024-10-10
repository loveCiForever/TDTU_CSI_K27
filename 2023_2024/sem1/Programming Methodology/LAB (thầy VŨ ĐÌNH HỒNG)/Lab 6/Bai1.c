#include <stdio.h>
#include <stdbool.h>

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

bool prime_check(int i, int num)
{
	if(num == 0 || num == 1)
		return false;
		
    if(i == num) 
        return true;
    else
	{
		if(num % i == 0)
        	return false;
		else
			return prime_check(i+1,num);
	}
}

void main()
{
    int num;
    enter_num(&num);
    if(prime_check(2, num))
    	printf("\t%d is a prime number", num);
    else
    	printf("\t%d is not a prime number", num);
}
