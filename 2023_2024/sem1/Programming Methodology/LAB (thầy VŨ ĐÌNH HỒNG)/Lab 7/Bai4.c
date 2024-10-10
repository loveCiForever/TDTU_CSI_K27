
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

#define MAX 1001
const long MAX_LN = 1e9 + 1;

void import_input(int *n);
void import_array(int a[], int n);
void export_array(int a[], int n);
void swap(int *a, int *b);
void bb_sort(int a[], int n);


int main() 
{
	int a[MAX], n;
	
	import_input(&n);
	import_array(a, n);

	printf("Array is: ");
	export_array(a, n);
	bb_sort(a, n);
	printf("\nArray after sorted in descendant order is: ");
	export_array(a, n);
	
    
    return 0;
}

void import_input(int *n)
{
	do
	{
		printf("Enter the size of array: ");
		scanf("%d", &*n);
		if(*n <= 0)
			printf("Wrong value, enter again!\n");
	} while(*n <= 0);
}

void import_array(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("Enter digits number %d: ", i+1);
		scanf("%d", &a[i]);
	}
}

void export_array(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d ",a[i]);
	}
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bb_sort(int a[], int n)
{
	int i, j;
	for(i = n - 2; i >= 0; i--)
	{
		for(j = 0; j <= i; j++)
		{
			if(a[j] < a[j + 1])
				swap(&a[j], &a[j+1]);
		}
	}
}