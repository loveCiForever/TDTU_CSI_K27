
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
void sum_even(int a[], int *n);

// Main function__________________________________________________________________________________________________
signed main() 
{
    int n;
    int a[MAX_N];

    enter_input(&n);
    enter_array(a, &n);
    sum_even(a, &n);

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
}

void export_array(int a[], int *n)
{
	for(int i = 0; i < *n; i++)
	{
		printf(" %d ", a[i]);
	}
}

void sum_even(int a[], int *n)
{
	int suma = 0;

	for(int i = 0; i < *n; i++)
	{
		if(a[i] %2 == 0) suma += a[i];
	}

	printf("The sum all even numbers of array [");
	export_array(a, n);
	printf("] is %d", suma);
}


