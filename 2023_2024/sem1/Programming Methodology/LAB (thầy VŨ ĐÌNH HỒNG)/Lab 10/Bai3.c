
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

bool valid_year(int year);
bool valid_month(int month);
bool valid_date(int date, int month, int year);
bool nam_nhuan(int year);

int cal_days_khong_nhuan(int month, int year);

int main() 
{
    int date, month, year;
    printf("Enter Date, Month and Year: ");
    	scanf("%d %d %d", &date, &month, &year);

  	if(valid_year(year) && valid_month(month) && date <= cal_days_khong_nhuan(month, year))
  		printf("Valid date, month and year: %d/%d/%d", date, month, year);
  	else
  		printf("Invalid date, month and year: %d/%d/%d", date, month, year);
  	
    return 0;
}

bool valid_year(int year)
{
	if(year > 0)
		return true;
	else
		return false;
}

bool valid_month(int month)
{
	if(month > 0 && month < 13)
		return true;
	else
		return false;
}



bool nam_nhuan(int year)
{
	if(year %100 == 0 && year %400 == 0)
		return true;
	else if(year %4 == 0)
		return true;
	else 
		return false;
}

int cal_days_khong_nhuan(int month, int year)
{
	int Days;

	switch (month)
	{
		case 1:
			Days = 31;
			break;	
		case 3:
			Days = 28;
			break;
		case 4:
			Days = 30;
			break;
		case 5:
			Days = 31;
			break;
		case 6:
			Days = 30;
			break;
		case 7:
			Days = 31;
			break;
		case 8:
			Days = 31;
			break;
		case 9: 
			Days = 30;
			break;
		case 10:
			Days = 31;
			break;
		case 11:
			Days = 30;
			break;
		case 12:
			Days = 31;
			break;
		case 2:
			if(nam_nhuan(year))
				Days = 29;
			else
				Days = 28;
			break;			
	}

	return Days;
}