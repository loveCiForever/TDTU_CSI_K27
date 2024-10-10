
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415926535897932384626433832795l 
#define db double // %lf
#define uli unsigned long int // %lu
#define li long int // = signed long int %ld

const int MAX_N = 1001;
const long MAX_LN = 1e9 + 1;


int main() 
{
    int choice;
    long inp_money;
    long change;

	printf("______MENU______\n");
    printf("1. Pepsi:     6000 VND\n");
    printf("2. Tra xanh:  7000 VND\n");
    printf("3. Sting:     8000 VND\n");
    printf("4. Sua tuoi:  6000 VND\n");
    printf("5. Nuoc suoi: 4000 VND\n");
    printf("\n");

    printf("Please choose a drink by press the button from 1 to 5: ");
    scanf("%d", &choice);

    if(choice > 5) 
    {
    	printf("Invalid choice [EXIT PROGRAM]\n");
    	return 0;
    }

    printf("Please put money into the machine: ");
    scanf("%lu", &inp_money);
    printf("Recived: %lu VND\n", inp_money);

    switch(choice)
    {
   		case 1:
			change = inp_money - 6000;
			break;
   		case 2:
   			change = inp_money - 7000;
   			break;
   		case 3:
   			change = inp_money - 8000;
   			break;
   		case 4:
   			change = inp_money - 6000;
   			break;
   		case 5:
   			change = inp_money - 4000;
   			break;
    }

    if(change == 0) 
        printf("Enough money. Thank you very much and see you again\n");
    else if (change > 0) 
        printf("Here is your change: %lu. Thank you very much and see you again", change);
    else
        printf("Not enough money [EXIT PROGRAM] ");
    
    return 0;
}
