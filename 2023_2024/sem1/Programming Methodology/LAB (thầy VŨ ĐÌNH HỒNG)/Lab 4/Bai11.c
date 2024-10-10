
// Declear variables; define constant values. Include library_____________________________________________________
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

const int MAX_N = 1001;
const long MAX_LN = 1e9 + 1;

void enter_input(int *n);
void enter_array(int a[], int *n);
void export_array(int a[], int *n);
void bb_sort(int a[], int *n);
void swap(int *a, int *b);
void count_dup_dig(int a[], int *n);

// Main function__________________________________________________________________________________________________
signed main() 
{
    int n;
    int a[MAX_N];

    enter_input(&n);
    enter_array(a, &n);
    bb_sort(a, &n);
    printf("The array after storted: ");
    export_array(a, &n);
    count_dup_dig(a, &n);
    return 0;
}

/* TEST CASE

*/

// Function definition____________________________________________________________________________________________
void enter_input(int *n)
{
	while(true)
    {
        printf("Enter N (N > 0): ");
        scanf("%d", &*n);

        if(*n > 0) break;
        else printf("[INVALID INPUT] Please enter again.\n");
    }	
}

void enter_array(int a[], int *n)
{
	for(int i = 0; i < *n; i++)
	{
		if((i + 1) == 1) 
		{
			printf("Enter the 1st digit: ");
			scanf("%d", &a[i]);
		}
		else if((i + 1 == 2))
		{
			printf("Enter the 2nd digit: ");
			scanf("%d", &a[i]);
		}
		else if((i + 1 == 3))
		{
			printf("Enter the 3rd digit: ");
			scanf("%d", &a[i]);
		}
		else
		{
			printf("Enter the %dth digit: ", i + 1);
			scanf("%d", &a[i]);
		}
	}
	printf("\n");
}

void export_array(int a[], int *n)
{
	printf("[");
	for(int i = 0; i < *n; i++)
	{
		printf(" %d ", a[i]);
	}
	printf("]\n\n");
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}

void bb_sort(int a[], int *n)
{
	for(int i = 0; i < *n; i++)
	{
		for(int j = 0; j < *n - i - 1; j++)
		{
			if(a[j] > a[j + 1]) swap(&a[j], &a[j + 1]);
		}
	}
}

void count_dup_dig(int a[], int *n) // 1 1 2 2 3
{
	int temp = 0;
	for(int i = 0; i < *n; i++)
	{
		int count = 1;
		for(int j = i + 1; j < *n; j++)
		{
			//printf("j : %d\n", j);
			if(a[i] == a[j]) count++;
			else 
			{
				temp = j;
				break;
			}
		}
		//printf("count: %d\n", count);

		printf("The number %d has appear %d time\n", a[i], count);
		if(count > 1) i = temp - 1;
			//printf("i : %d\n", i);
	}
	//printf("temp: %d", temp);
}

