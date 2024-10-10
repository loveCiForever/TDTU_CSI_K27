
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

bool char_appear(char str[], int length, char c);
int first_pos_appear(char str[], int length, char c);

// Main function_________________________________________________________________________________________
signed main() 
{
	char str1[MAX_N], c;

    printf("Enter the first string: ");
    fgets(str1, MAX_N, stdin);

    int length = strlen(str1);

    printf("Enter a character to find: ");
    scanf("%c", &c);

    if(char_appear(str1, length, c)) 
    	printf("The character '%c' appear the first time at postion %d of the string", c, first_pos_appear(str1, length, c) + 1);

	else printf("The character '%c' doesn't appear in the string %s", c, str1);

    return 0;
}

// Function definition___________________________________________________________________________________

bool char_appear(char str[], int length, char c)
{
	int i;
	for(i = 0; i < length; i++)
	{
		if(str[i] == c)
			return true;
	}
	return false;
}

int first_pos_appear(char str[], int length, char c)
{
	for(int i = 0; i < length; i++)
	{
		if(str[i] == c)
			return i;
	}
}