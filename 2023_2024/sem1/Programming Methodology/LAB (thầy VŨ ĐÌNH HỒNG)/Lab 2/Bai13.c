
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
   int num, orinum, res = 0;

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

   orinum = num
   int length = int(log10(num)) + 1;

   while(num > 0)
   {
      res = res + pow((num % 10), length);
      num /= 10;
   }

   if(res == orinum) printf("%d is an armstrong number" , orinum);
   else printf("%d is not an armstrong number" , orinum);

   return 0;

}