
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

const int MAX_N = 1001;
const long MAX_LN = 1e9 + 1;

void swap(int *a, int *b);
void quick_sort(int arr[], int length);
void quick_sort_recur(int arr[], int low, int high);

int partition(int arr[], int low, int high);

int main() 
{
    int arr[] = {2005, 1999, 699, 888, 1000};
    int length = 5;

    int i;
    printf("The array before sort by Quick Sort algorithm: ");
    for(i = 0; i < length; i++)
    	printf("%d ", arr[i]);
       printf("\n");

    quick_sort(arr, length);

    printf("The array after sort by Quick Sort algorithm: ");
    for(i = 0; i < length; i++)
    	printf("%d ", arr[i]);
    printf("\n");



    return 0;
}

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void quick_sort(int arr[], int length)
{
	quick_sort_recur(arr, 0, length - 1);

}

void quick_sort_recur(int arr[], int low, int high)
{
	if(low < high)
	{	
		int pivot = partition(arr, low, high);
		quick_sort_recur(arr, low, pivot - 1);
		quick_sort_recur(arr, pivot + 1, high);
	}
}

int partition(int arr[], int low, int high)
{
	int pivot_val = arr[high];

	int i = low, j;
	for(j = low; j < high; j++)
	{
		if(arr[j] <= pivot_val)
		{
			swap(&arr[i], &arr[j]);
			i++;
		}
	}

	swap(&arr[i], &arr[high]);

	return i;
}