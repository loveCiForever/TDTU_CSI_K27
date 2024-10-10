
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
void last_name(char str[]);
void first_name(char str[]);

// Main function_________________________________________________________________________________________
signed main() 
{
    char str[MAX_N];
    printf("Enter your full name: ");
    fgets(str, MAX_N, stdin);

    printf("The full name is: %s", str);
    str_delete(str);

    printf("The last name is: ");
    last_name(str);
    printf("\n");
    printf("The first name is: ");
    first_name(str);

    return 0;
}

// Function definition___________________________________________________________________________________
void last_name(char str[])
{
    int length = strlen(str);
    for(int i = length - 1; i >= 0; i--)
    {
        if(str[i] == ' ')
        {
            for(int j = i + 1; j < length; j++)
            {
                printf("%c", str[j]);
            }
            break;
        }
    }
}
void first_name(char str[])
{
    int length = strlen(str);
    for(int i = 0; i < length; i++)
    {
        if(str[i] == ' ')
        {
            for(int j = 0; j < i; j++)
            {
                printf("%c", str[j]);
            }
            break;
        }
    }
}
void str_delete(char str[])
{
    int length = strlen(str);
    if(str[length - 1] == '\n') str[length - 1] = '\0'; 
}
