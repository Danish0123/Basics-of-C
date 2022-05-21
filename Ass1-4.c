#include <stdio.h>
#include <cmath.h>
int main()
{
	int a,b,c,Area;
	a=4;
	b=10;
	c=2;
	s=(a+b+c)/2;
	Area=sqrt((s*(s-a)*(s-b)*(s-c)))
	printf("Area : %d",Area);
	return(0);
}
