#include <stdio.h>
void main()
{
	int l,b,area,perimeter;
	printf ("please enter the length and breadth of the rectangle for which area and perimeter are to be found");
	scanf ("%d %d",&l,&b);
	area=l*b;
	perimeter=2*(l+b);
	printf ("Area = %d\n perimeter= %d\n",area,perimeter);
}