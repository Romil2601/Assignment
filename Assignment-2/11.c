//11.	Write a C program that takes two strings from the user and concatenates them using strcat(). Display the concatenated string and its length using strlen().

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value in str1 = ");
	gets(str1);
	printf("\nEnter the value in str2 = ");
	gets(str2);
	
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	
	strcat(str1,str2);
	
	printf("\nValue of str1 after using concate function = %s",str1);
	printf("\nValue of str2 after using concate function = %s",str2);
	
	int len = strlen(str1);
	
	printf("\nLength of str1 = %d",len);
	printf("\nLength of str2 = %d",strlen(str2));
	return 0;
}
