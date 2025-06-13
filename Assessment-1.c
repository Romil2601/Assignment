//Assessment -1
/*1. Write a program to demonstrate a Food Billing System. Display
the Menu using appropriate codes. For Menu kinds of
Programming, use the core logic of Loops/conditional
statements. You need to strictly follow the syntaxes of that
logic which you are using. Write the necessary comments for
better understanding to you as well as to the faculty.*/
#include <stdio.h>
void displayMenu() {
 printf("\n====== Food Menu ======\n");
 printf("1. Pizza - Rs.150\n");
 printf("2. Burger - Rs. 80\n");
 printf("3. Pasta - Rs.120\n");
 printf("4. Sandwich - Rs. 60\n");
 printf("5. Cold Drink- Rs. 40\n");
 printf("=======================\n");
}
int main() {
 int choice, quantity;
 char moreItems;
 int totalBill = 0;
 do {
 displayMenu();
 printf("Enter the item number you want to order: ");
 scanf("%d", &choice);
 printf("Enter the quantity: ");
 scanf("%d", &quantity);
 switch(choice) {
 case 1:
 totalBill = totalBill + (150 * quantity);
 break;
 case 2:
 totalBill = totalBill + (80 * quantity);
 break;
 case 3:
 totalBill = totalBill + (120 * quantity);
 break;
 case 4:
 totalBill = totalBill + (60 * quantity);
 break;
 case 5:
 totalBill = totalBill + (40 * quantity);
 break;
 default:
 printf("Invalid choice! Please select a valid item.\n");
 break;
 }
 printf("Do you want to order more items? (y/n): ");
 scanf(" %c", &moreItems);
 } while(moreItems == 'y' || moreItems == 'Y');
 printf("\nYour total bill is: Rs.%d\n", totalBill);
 printf("\nThank you for ordering. Visit again!");
 return 0;
}
