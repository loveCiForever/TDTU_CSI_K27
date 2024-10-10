
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
void merge_2_array(int a1[], int *n1, int a2[], int *n2);

// Main function__________________________________________________________________________________________________
signed main() 
{
    int n1, n2;
    int a1[MAX_N], a2[MAX_N];

    enter_input(&n1);
    enter_array(a1, &n1);
    printf("The array you enter is: ");
    export_array(a1, &n1);

    enter_input(&n2);
    enter_array(a2, &n2);
    printf("The array you enter is: ");
    export_array(a2, &n2);

    merge_2_array(a1, &n1, a2, &n2);

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

void merge_2_array(int a1[], int *n1, int a2[], int *n2)
{
	int a3[MAX_N];
	for(int i = 0; i < *n1; i++)
	{
		a3[i] = a1[i];
	}

	int i = 0;
	for(int j = *n1; j < *n1 + *n2; j++)
	{
		a3[j] = a2[i];
		i++;
	}
	printf("The megre array: [");
	for(int i = 0; i < *n1 + *n2; i++)
	{
		printf(" %d ", a3[i]);
	}
	printf("]");

}