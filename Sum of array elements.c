//program to find sum of all array elements
#include<stdio.h>
  int mian()
  {
  	int i,array[10],sum=0;
  	for(i=0;i<10;i++)
  	{
  		printf("Enter numbers:");
  		scanf("%d",&array[i]);
  	}
  	for(i=0;i<10;i++)
  	{
  		printf("%d",array[i]);	 
	}
	for(i=0;i<10;i++)
	sum=sum+array[i];
	printf("\nSum of array element=%d",sum); 
	return 0;
}
