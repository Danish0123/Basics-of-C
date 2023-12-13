//program to find max elements in an array
#include<stdio.h>
  int mian()
  {
  	int i,array[10],max;
  	for(i=0;i<10;i++)
  	{
  		printf("Enter numbers:");
  		scanf("%d",&array[i]);
  	}
  	max=array[0];
  	for(i=0;i<10;i++)
  	{
  		if(array[i]>max)
  		max=array[i];
	}
	printf("Max number is %d",max);
	return 0;
}
