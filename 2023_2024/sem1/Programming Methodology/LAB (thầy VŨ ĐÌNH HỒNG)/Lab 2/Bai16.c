
#include<stdio.h>
#include<conio.h>
#include<math.h>

bool checkArm(int orinum)
{
    int n = orinum;
    int length = int(log10(n) + 1);
    int res = 0;

    while(n > 0)
    {
        res += pow(n %10, length);
        n /= 10;
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
        if(checkArm(i)) printf(" %d ", i);
    }


    
    return 0;

}