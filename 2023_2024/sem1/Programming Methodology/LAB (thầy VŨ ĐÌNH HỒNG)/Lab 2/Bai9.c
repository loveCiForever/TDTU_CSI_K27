
#include<stdio.h>
#include<conio.h>
#include<math.h>



int main()
{
    long signed num, res, last, first, temp;

    while(true)
    {
        printf("Enter n (n > 0): ");
        scanf("%d", &num);
        if(num > 0) break;
        else 
        {   
            printf("INVALID INPUT, PLEASE ENTER AGAIN!!!\n");
            continue;
        }
    }

    temp = num;
    last = num % 10;

    while(temp >= 10)
    {
        temp /= 10;
    }

    first = temp;
    /// 367 

    temp = (int(log10(num))); // temp = 2
    res = last;
    res *= (pow(10, temp)); 
    res += num %((pow(10, temp)));
    res -= last;
    res += first;

    printf("The swapped n is: %d \n", res);
    return 0;

}