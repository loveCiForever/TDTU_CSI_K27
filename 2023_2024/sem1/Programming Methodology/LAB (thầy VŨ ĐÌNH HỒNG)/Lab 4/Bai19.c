
// Declear variables; define constant values. Include library_____________________________________________________
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

#define MAX_N 99
#define MAX_LN 1e9 + 1

void enter_input(int *r, int *c);
void enter_array(int a[][MAX_N], int r, int c);
void export_array(int arr[][MAX_N], int r, int c);
void _2matrix_equal_ornot(int a1[][MAX_N], int a2[][MAX_N], int r, int c);

// Main function__________________________________________________________________________________________________
signed main() 
{
    int r, c;
    int a1[MAX_N][MAX_N], a2[MAX_N][MAX_N];
    enter_input(&r, &c);
    enter_array(a1, r, c);
    printf("\nMartix you had entered is:\n");
    export_array(a1, r, c);

    enter_array(a2, r, c);
    printf("\nMartix you had entered is:\n");
    export_array(a2, r, c);

    _2matrix_equal_ornot(a1, a2, r, c);

    return 0;
}

/* TEST CASE

*/

// Function definition____________________________________________________________________________________________
void enter_input(int *r, int *c)
{
	while(true)
    {
        printf("How many row (R > 0): ");
        scanf("%d", &*r);
       	printf("How many column (C > 0): ");
        scanf("%d", &*c);

        if(*r > 0 && *c > 0) break;
        else printf("[INVALID INPUT] Please enter again.\n");
    }
    printf("\nThe Matrix has %d row and %d column\n\n", *r, *c); 
}

void enter_array(int a[][MAX_N], int r, int c)
{
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			printf("Enter digit [%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void export_array(int arr[][MAX_N], int r, int c)
{
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			printf(" %d ", arr[i][j]);
		}
		printf("\n\n");
	}
}

void _2matrix_equal_ornot(int a1[][MAX_N], int a2[][MAX_N], int r, int c)
{
	int count = 0;
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			if(a2[i][j] == a1[i][j]) count++;
			else break;
		}
	}
	if(count == r * c) printf("2 matrix are equal");
	else printf("2 matrix are not equal");
}




