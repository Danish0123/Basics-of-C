//program to print sum of all even numbers b/w 1 to n
#include <stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter integer value:");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
		sum+=i;
	}
	printf("sum of all even number btw 1 to %d = %d",n,sum);
	return 0;
}
