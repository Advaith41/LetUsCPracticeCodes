#include <stdio.h>
void main()
{
	float cp,sp,profit;
	printf ("please enter the selling price and profit obtained for 15 items");
	scanf ("%f %f",&sp,&profit);
	cp=(sp-profit)/15;
	printf("your costprice is %f\n",cp);
}