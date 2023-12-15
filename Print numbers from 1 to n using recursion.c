// program to print numbers from 1 to n using recursion
#include<stdio.h>
int my_recursive_function(int n)
{
	if(n==0)
	return ;
	my_recursive_function(n-1);
	printf("%d\t",n);
}
int main()
{
	int x;
	int n;
	printf("Enter a integer value: ");
	scanf("%d",&n);
	x = my_recursive_function(n);
	return 0;
}
