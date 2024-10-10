
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
void classify_dig(int a1[], int *n1);

// Main function__________________________________________________________________________________________________
signed main() 
{
    int n1;
    int a1[MAX_N];

    enter_input(&n1);
    enter_array(a1, &n1);
    printf("The array you enter is: ");
    export_array(a1, &n1);

    classify_dig(a1, &n1);
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

void classify_dig(int a1[], int *n1)
{
	int even[MAX_N], odd[MAX_N];
	int ev = 0, od = 0;

	for(int i = 0; i < *n1; i++)
	{
		if(a1[i] %2 == 0) 
		{
			even[ev] = a1[i];
			ev++;
		}
		else
		{
			odd[od] = a1[i];
			od++;
		}
	}

	printf("The even array is: ");
	for(int i = 0; i < ev; i++)
	{
		printf(" %d " , even[i]);
	}

	printf("\n");
	printf("The odd array is: ");
	for(int i = 0; i < od; i++)
	{
		printf(" %d " , odd[i]);
	}
}

