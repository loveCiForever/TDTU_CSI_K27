
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

const int MAX = 1001;
const long MAX_LN = 1e9 + 1;


int main() 
{
    char str[MAX];
    FILE *fread, *fwrite;

    fread = fopen("input02.txt", "r");
    fwrite = fopen("output02.txt", "w");

    int i;
    for(i = 0; i < 5; i++)
    {
        fgets(str, MAX, fread);
        int len = strlen(str);
        if(str[len - 1] == 10)
            str[len - 1] = '\0';
        fprintf(fwrite, "%d\n", strlen(str));
    }
   
    fclose(fread);
    fclose(fwrite);
    return 0;
}
