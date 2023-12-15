//program to addition of two numbers using functions
#include<stdio.h>
float addition(float num1,float num2)
{
	float sum;
		sum = num1 + num2;
		return sum;
}
int main()
{
	float num1, num2, result;
	printf("Enter two numbers:");
	scanf("%f %f",&num1,&num2);
	result = addition(num1,num2);
	printf("%f + %f = %f",num1,num2,result);
	return 0;
}
