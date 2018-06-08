#include <stdio.h>
 
void main ()
{

float km,feet,meter;
printf("advaith give the distance between cities");
scanf("%f", &km);
meter=1000*km;
feet=0.000305*km;
printf("this is the distance in meter and feet are %f and %f respectively\n ",meter,feet);

}