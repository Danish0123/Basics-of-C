//program to find the square of any number using function
#include<stdio.h>
double square(double num)
{
	return(num * num);
}
int main()
{
	int num;
	double n;
	printf("Input  number:");
	scanf("%d",&num);
	n = square(num);
	printf("The square of %d is : %f",num,n);
	return 0;
}
