
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

int check_word(char c)
{
	return(c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}


int main() 
{
    char s[MAX_N];
    	fgets(s, MAX_N, stdin);

    int len = strlen(s);
    int i, count = 0;

    while(count == 0)
    {
    	if(s[i] < 60 && s[i] > 71 && ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')))     
    		count++;
    	else
    		count = 0;
    }

    printf("%d", count);
    return 0;
}
