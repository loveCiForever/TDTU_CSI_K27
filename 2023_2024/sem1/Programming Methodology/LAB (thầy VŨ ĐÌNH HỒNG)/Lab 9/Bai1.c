
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


int main() 
{
    int n, sum = 0;

    FILE *fread;
    fread = fopen("input01.txt", "r");

    int i;
    for(i = 0; i < 20; i++)
    {
        fscanf(fread,"%d",&n);
        sum += n;
    }
    fclose(fread);

    FILE *fwrite;
    fwrite = fopen("output01.txt", "w");
    fprintf(fwrite, "Sum = %d", sum);
    fclose(fwrite);
    
    return 0;
}
