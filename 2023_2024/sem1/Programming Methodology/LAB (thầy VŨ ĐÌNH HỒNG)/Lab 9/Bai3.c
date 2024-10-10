
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

const int MAX_N = 1001;
const long MAX_LN = 1e9 + 1;

void read_File(char fileName[], char str[], int arr[], int *n);
void delete_endl(char str[]);

int sequential_search(int a[], int k, int n);
int binary_search(int a[], int n, int k);

void bb_sort(int a[], int n);
void swap(int *a, int *b);

int main() 
{
	char str[MAX_N];
	char fileName[MAX_N];
	int arr[MAX_N];
	int n;

    printf("Enter a filename: ");
    fgets(fileName, MAX_N, stdin);
    delete_endl(str);

    printf("Your filename: %s", fileName);

    FILE *fread;
    fread = fopen("fileName", "r");
    if(fread == NULL)
        printf("Wrong file");
   
    fgets(str, MAX_N, fread);
    delete_endl(str);

    n = 0;
    int i = 0;
    while(fscanf(fread, "%d", &arr[i]) != EOF)
    {
        i++;
        n++;
    }
    fclose(fread);


    int num;
    printf("Enter a value to search for: ");
    scanf("%d", &num);

    int choice;
    printf("choose one of these search algolrithms:\n ");
    printf("1. Sequential search.\n");
    printf("2. Binary search.");
    scanf("%d", &choice);

    if(choice == 1)
    {
    	int posi = sequential_search(arr, num, n);
    	if(posi != - 1)
    		printf("Found. The %d digits appear in the position number %d.\n", num, posi);
    	else 
    		printf("NOT FOUND.\n");
    }
    else if(choice == 2)
    {
    	int posi = binary_search(arr, n, num);
    	if(posi != - 1)
    		printf("Found. The %d digits appear in the position number %d.\n", num, posi);
    	else 
    		printf("NOT FOUND.\n");
    }

    return 0;
}



int sequential_search(int a[], int k, int n)
{
	int i;
	for(i = 0; i < n; i++)
		if(a[i] == k)
			return i;
	return -1;	
}

void delete_endl(char str[])
{
	int len = strlen(str);
	if(str[len - 1] == '\n')
		str[len - 1] = '\0';
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
	bb_sort(a, n);

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

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}