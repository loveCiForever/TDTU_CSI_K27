
#include<stdio.h>
#include<conio.h>

signed main()
{
    char name[1000];
    float mark;
    float ave = 0;
    float sum = 0;

    printf("Enter student's name: ");
    scanf("%s", name);

    printf("Enter %s's mark of Physics, Chemistry, Biology, Mathematics, Computer (100/100): ", name);
    for(int i =0; i < 5; i++)
    {
        scanf("%f", &mark);
        sum += mark;
    }
    
    ave = sum / 5;

    if(ave < 40) printf("Student's grade is F\n");
    else if(ave >= 40 && ave < 60) printf("Student's grade is E\n");
    else if(ave >= 60 && ave < 70) printf("Student's grade is D\n");
    else if(ave >= 70 && ave < 80) printf("Student's grade is C\n");
    else if(ave >= 80 && ave < 90) printf("Student's grade is B\n");
    else if(ave >= 90 ) printf("Student's grade is A\n");

    return 0;

}