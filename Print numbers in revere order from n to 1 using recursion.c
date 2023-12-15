//program to print numbers in revere order from n to 1 using recursion
#include<stdio.h>
int my_recursive_function(int n)
{
	if(n==0)
	return ;
	printf("%d\t",n);
	my_recursive_function(n-1);
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
