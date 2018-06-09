#include <stdio.h>
void main()
{
	float f,c;
	printf ("please enter the temperature in fahreheit");
	scanf ("%f",&f);
	c= 0.55*(f-32);
	printf ("the temperature required in celcius is %f'c\n",c);
}