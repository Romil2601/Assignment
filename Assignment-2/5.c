//5.	Write a C program to check if a number is even or odd using an if-else statement. Extend the program using a switch statement to display the month name based on the user’s input (1 for January, 2 for February, etc.).

#include <stdio.h>
int main() {

    int num, month;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("The number %d is even.\n", num);
    } else {
        printf("The number %d is odd.\n", num);
    }

    printf("\nEnter the month number (1-12): ");
    scanf("%d", &month);
    
    switch (month) {
        case 1:
            printf("Month 1 is January.\n");
            break;
        case 2:
            printf("Month 2 is February.\n");
            break;
        case 3:
            printf("Month 3 is March.\n");
            break;
        case 4:
            printf("Month 4 is April.\n");
            break;
        case 5:
            printf("Month 5 is May.\n");
            break;
        case 6:
            printf("Month 6 is June.\n");
            break;
        case 7:
            printf("Month 7 is July.\n");
            break;
        case 8:
            printf("Month 8 is August.\n");
            break;
        case 9:
            printf("Month 9 is September.\n");
            break;
        case 10:
            printf("Month 10 is October.\n");
            break;
        case 11:
            printf("Month 11 is November.\n");
            break;
        case 12:
            printf("Month 12 is December.\n");
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}
