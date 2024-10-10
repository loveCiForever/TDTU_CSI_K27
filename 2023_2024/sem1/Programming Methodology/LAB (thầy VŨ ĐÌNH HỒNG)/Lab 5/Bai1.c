
// Declear variables; define constant values. Include library____________________________________________
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

int length_of_string(char str[]);
void str_delete(char str[]);

// Main function_________________________________________________________________________________________
signed main() 
{
    char str[MAX_N];
    printf("Enter a string: ");
    fgets(str, MAX_N, stdin);

    printf("The string: %s\n", str);
    str_delete(str);

    printf("The length of string: %d\n", length_of_string(str));

    return 0;
}

// Function definition___________________________________________________________________________________
int length_of_string(char str[])
{
	int count = 0;
	
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == '\0') continue;
		else count++;
	} 
	return count;
}

void str_delete(char str[])
{
	int length = length_of_string(str);
	if(str[length - 1] == '\n') str[length - 1] = '\0'; 
}
