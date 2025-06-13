//10.	Write a C program to demonstrate pointer usage. Use a pointer to modify the value of a variable and print the result.

#include <stdio.h>
int main()
{
    int number = 5;
    int *ptr;  

    ptr = &number;  // Store the address of 'number' in pointer 'ptr'
    printf("Original value of number: %d\n", number);

    *ptr = 10; // Value of pointer is modified
    printf("Modified value of number using pointer: %d\n", number);

    return 0;
}
