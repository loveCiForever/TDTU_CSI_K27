
#include <stdio.h>
#include <math.h>

signed main()
{

	int d;
	int res;
	printf("Enter the total distance (km): ");
	scanf("%d", &d);
	
	if(d <= 1) 
		res = 18000 * d;
	else if(d <= 10) 
		res = 1  * 18000 + (d - 1) * 8000;
	else if(d <= 30) 
		res = 1 * 18000 + 9 * 8000 + (d - 10) * 6000;
	else 
		res = 1 * 18000 + 9 * 8000 + 20 * 6000 + (d - 30) * 4000;

	printf("The total money customer have to pay is: %d VND", res);
	
	return 0;
}

