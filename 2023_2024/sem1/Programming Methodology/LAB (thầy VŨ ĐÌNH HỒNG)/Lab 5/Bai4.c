
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

void delete_digit(char str[], int *length, int pos);
void delete_redundant_space(char str[], int *length);
void charec(char str[], int *length);

// Main function_________________________________________________________________________________________
signed main() 
{
    char str[MAX_N];
    printf("Enter a string: ");
    fgets(str, MAX_N, stdin);

    int length = strlen(str);

    printf("The string your entered: %s", str);
    delete_redundant_space(str, &length);
    printf("The string after delete space: %s", str);
    charec(str, &length);
    printf("The final string: %s", str);


    return 0;
}

// Function definition___________________________________________________________________________________
void delete_digit(char str[], int *length, int pos)
{
    for(int i = pos; i < *length; i++)
    {
        str[i] = str[i + 1];
    }
    *length -= 1;
}

void delete_redundant_space(char str[], int *length)
{
    for(int i = *length - 1; i >= 1; i--)
    {
        if(str[i] == ' ' && str[i-1] != ' ') continue;
        if(str[i] == ' ') delete_digit(str, &*length, i);
    }
    if(str[0] == ' ') delete_digit(str, &*length, 0) ;
}

void charec(char str[], int *length)
{
    for(int i = *length - 1; i >= 1; i--)
    {
        if(str[i] != ' ' && str[i-1] == ' ') str[i] = toupper(str[i]);
        else str[i] = tolower(str[i]);
    }
    if(str[0] != ' ') str[0] = toupper(str[0]);

}