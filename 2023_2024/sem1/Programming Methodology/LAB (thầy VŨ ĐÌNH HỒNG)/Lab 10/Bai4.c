
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

int check_pan_string(char *str, int len);

int main() 
{
	char str[MAX_N];
	printf("Enter the string: ");
	scanf("%s", str); /*fgets(str, MAX_N, stdin);*/

	int len = strlen(str);

	if(check_pan_string(&str, len))
		printf("1");
	else
		printf("0");
		

    
    return 0;
}

int check_pan_string(char *str, int len)
{
	int i = 0, j = len - 1;
		while(j > i)
		{
			if(str[i++] != str[j--])
			{
				return 0;
				break;
			}			
		}
	return 1;
}