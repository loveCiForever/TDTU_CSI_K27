// NGUYEN QUANG HUY
// STUDENT ID: 523H0140
// CLASS: 23H50301
// FACULTY: INFORMATION TECHNOLOGY
// MAJOR: COMPUTER SCIENCE
// TON DUC THANG UNIVERSIRY

#include<stdio.h>
#include<conio.h>
#include<math.h>
// #define FOR(i, l, r) for(int (i) = l; (i) <= (r); (i)+= 2)

bool checkPer(int orinum)
{
    int n = orinum;
    int res = 1;

    for(int i = 1; i < n; i++) 
    {
        if(n %i == 0) res *= i;
    }

    if(res == orinum) return true;
    else return false;
}

int main()
{       
    int n;
    while(true)
    {
        printf("Enter n (n > 0): ");
        scanf("%d", &n);
        if(n > 0) break;
        else 
        {   
            printf("INVALID INPUT, PLEASE ENTER AGAIN!!!\n");
            continue;
        }
    }

    for(int i = 1; i <= n; i++)
    {
        if(checkPer(i)) printf(" %d ", i);
    }
   
    return 0;

}