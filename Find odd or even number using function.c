//program to find odd or even number using function
#include<stdio.h>
int checkoddeven(int num)
{
	return(num & 1);
}
int main()
{
	int num;
	printf("Enter any number");
	scanf("%d",&num);
	if (checkoddeven(num))
	{
		printf("The number is odd");
	}
	else
	{
		printf("The number is even");
	}
	return 0;
}
