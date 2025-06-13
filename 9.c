//9.	Write a C program that calculates the factorial of a number using a function. Include function declaration, definition, and call.

#include<stdio.h>
int multi(int num)
{
	int i, fact=1;
	for(i=1;i<=num; i++)//Increment
	{
		fact = fact * i;
	}
	
	printf("\nFactorial of %d is %d", num, fact);
}
int main()
{
	int n1;
	printf("\nEnter the number = ");
	scanf("%d",&n1);
	multi(n1);
	return 0; 
}
