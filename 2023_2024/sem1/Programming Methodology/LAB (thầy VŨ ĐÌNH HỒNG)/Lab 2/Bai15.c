
#include<stdio.h>
#include<conio.h>
#include<math.h>

bool checkPrime(int n)
{
    int kt = 0;
    if(n < 2) kt++;
    else 
    {
        for (int i = 2; i <= sqrt(n); i++) 
        {
            if (n % i == 0) kt++;
        }
    }

    if(kt == 0) return true;
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

    // for(int i = 1; i <= n; i++)
    // {
    //     if(checkPrime(i)) printf(" %d ", i);
    // }


    // int iwhile = 1;
    // while(iwhile <= n)
    // {
    //     if(checkPrime(iwhile)) printf(" %d ", iwhile);
    //     iwhile++;
    // }


    // int idwhile = 1;
    // do
    // {
    //     if(checkPrime(idwhile)) printf(" %d ", idwhile);
    //     idwhile++;
    // }
    // while(idwhile <= n);
    
    return 0;
}