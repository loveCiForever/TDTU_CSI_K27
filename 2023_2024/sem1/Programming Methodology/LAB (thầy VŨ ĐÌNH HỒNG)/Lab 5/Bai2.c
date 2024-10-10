
// Declear variables; define constant values. Include library____________________________________________
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <cstring>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

const int MAX_N = 1001;
const long MAX_LN = 1e9 + 1;

void str_delete(char str[]);
void reverse_string(char str[]);

// Main function_________________________________________________________________________________________
signed main() 
{
    char str[MAX_N];
    printf("Enter a string: ");
    fgets(str, MAX_N, stdin);

    printf("The string: %s", str);
    str_delete(str);

    reverse_string(str);

    return 0;
}

// Function definition___________________________________________________________________________________

void str_delete(char str[])
{
	int length = strlen(str);
	if(str[length - 1] == '\n') str[length - 1] = '\0'; 
}

void reverse_string(char str[])
{
	printf("The reversed string of %s is: ", str);
	for(int i = strlen(str) - 1; i >= 0; i--)
    {
    	printf("%c", str[i]);
    }
    printf("\n");
}