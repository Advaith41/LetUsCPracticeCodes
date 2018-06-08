#include <stdio.h>

void main()
{
	float basic,da,rent,gross ;
	printf("please enter your basic salary");
	scanf ("%f",&basic);
	da= 0.4*basic;
	rent=0.2*basic;
	gross=basic+rent+da ;
	printf("your gross is %f\n",gross );

}