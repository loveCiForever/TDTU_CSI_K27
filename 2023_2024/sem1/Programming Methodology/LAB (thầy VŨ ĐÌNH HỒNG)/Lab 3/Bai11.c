// Declear variables; define constant values. Include library_____________________________________________________
#include <stdio.h>
#include <conio.h>
#include <math.h>

bool check_palindrome(int n);

// Main function__________________________________________________________________________________________________ 
signed main() 
{   
    int n;

    while(true)
    {
        printf("Enter N (N > 0): ");
        scanf("%d", &n);

        if(n > 0) break;
        else continue;        
    }

    if(check_palindrome(n)) printf("%d is a palindrome number", n);
    else printf("%d is not a palindrome number", n);

    return 0;
}

// Function Definition____________________________________________________________________________________________
bool check_palindrome(int n)
{
    int res = 0;
    int nn = n;
    while(nn != 0)
    {
        res = res * 10 + nn % 10;
        nn /= 10;
    }
    if(res == n) return true;
    else return false;
}