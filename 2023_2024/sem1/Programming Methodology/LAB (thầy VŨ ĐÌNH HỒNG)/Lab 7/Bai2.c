
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
int binary_search(int a[], int n, int k);

int main() 
{
	int a[MAX], n;
	
	import_input(&n);
	import_array(a, n);

	printf("Array is: ");
	export_array(a, n);
		
	int k;
	printf("\nEnter the value you want to find: ");
	scanf("%d", &k);
	
	if(binary_search(a, n, k) != -1)
		printf("%d appear in the position %d of the array", k, binary_search(a, n, k) + 1);
	else
		printf("%d doesn't exist in the array", k);
    
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
		printf("Enter digits number %d: ",i+1);
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
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(a[i] > a[j])
				swap(&a[j], &a[j + 1]);
		}
	}
}

int binary_search(int a[], int n, int k)
{
	bb_sort(a,n);

	int left = 0, right = n - 1, mid;
	do
	{
		mid = (left + right) / 2;
		if(a[mid] == k)
			return mid;
		else
		{
			if(a[mid] > k)
				right = mid - 1;
			else 
				left = mid + 1;
		}
	} while(left <= right);
	return -1;
}