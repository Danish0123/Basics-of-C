//program to print all elements in reverse order
#include<stdio.h>
int mian()
  {
  	int i,array[10];
  	for(i=0;i<10;i++)
  	{
  		printf("Enter numbers:");
  		scanf("%d",&array[i]);
  	}
  	for(i=9;i>0;i--)
  	{
  		printf("%d",array[i]);	 
	}
	return 0;
  }
