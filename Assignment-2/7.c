//7.	Write a C program that stores 5 integers in a one-dimensional array and prints them. Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.

#include<stdio.h>
int main()
{
	int a[100],i,size,sum=0;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)//scanning
	{
		printf("\nEnter the element on a[%d] = ",i);
		scanf("%d",&a[i]);
		sum = sum +a[i];//addition
	}
	
	printf("\nNormal Sequence:");//Line Break
	for (i=0;i<size;i++)//printing
	{
		printf("\nValue at a[%d] = %d",i,a[i]);
	}
	
	return 0;
}
