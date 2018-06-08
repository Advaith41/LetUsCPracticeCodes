#include <stdio.h>
void main()
{
	int m1,m2,m3,m4,m5,total;
	float percentage;
	printf("please enter your marks in respective subjects");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	percentage=0.2*total;
	printf("Total= %d\n Percentage= %f%\n ",total,percentage);

}