
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define PI 3.1415926535897932384626433832795l 
#define MAX 100
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

int main() 
{
    char c[MAX], k;

    printf("Enter a string: ");
    	fgets(c, MAX, stdin);
    printf("Enter a word: ");
    	scanf("%c", &k);

    int len = strlen(c);
    int i, posi = -1;
    for(i = 0; i < len; i++)
    {
    	if(c[i] == k)
    	{
    		posi = (i + 1);
    		break;
    	}
    }
    if(posi != -1)
    	printf("The %c word appear in the %d postion of the string %s", k, posi, c);
    else
    	printf("The %c word does not appear in the string %s", k, c);
    
    return 0;
}
