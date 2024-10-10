
// Declear variables; define constant values. Include library____________________________________________
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <cstring>
#include <ctype.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

const int MAX_N = 1001;
const long MAX_LN = 1e9 + 1;

void merge_string(char str1[MAX_N], char str2[MAX_N], int *length1, int length2);
void delete_(char str[]);

// Main function_________________________________________________________________________________________
signed main() 
{
	char str1[MAX_N], str2[MAX_N];

    printf("Enter the first string: ");
    fgets(str1, MAX_N, stdin);
    delete_(str1);

    printf("Enter the second string: ");
    fgets(str2, MAX_N, stdin);
    delete_(str2);

    int length1 = strlen(str1);
    int length2 = strlen(str2);

    merge_string(str1, str2, &length1, length2);

    
    return 0;
}

// Function definition___________________________________________________________________________________
void merge_string(char str1[MAX_N], char str2[MAX_N], int *length1, int length2)
{
	int total_digit_1 = *length1;
	int i;
    *length1 += length2;
    printf("The final string: ");
    for(i = total_digit_1; i < *length1; i++)
    {
        str1[i] = str2[i + length2 - *length1];
    }
    str1[i] = '\0';
    
    for(int i = 0; i < *length1 + length2; i++)
    {
    	printf("%c", str1[i]);
    }
}

void delete_(char str[])
{
    int length = strlen(str);
    if(str[length - 1] == '\n') str[length - 1] = '\0';
}