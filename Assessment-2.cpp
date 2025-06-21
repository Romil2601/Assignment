/*Create a Project to demonstrate Simple Food Ordering Project which will help to order
foods . The Project should contain all the necessary requirements i.e need to use
conditional Statements, Loops, Function, SwitchCase and also A Program should use
the concept of OOP */

#include<iostream>
using namespace std;

int main() {
    string customerName;
    int mainChoice, subChoice, quantity;
    char orderAgain;
    float totalBill = 0;
    int totalTime = 0;

    cout << "Welcome to the Food Ordering System!" << endl;
    cout << "Enter your name: ";
    cin>> customerName;
    cout << "Hello, " << customerName << "! Let's start your order.\n";

    do {
        cout << "\nHello, " << customerName << "! Please choose a category:" << endl;
        cout << "1. Pizza" << endl;
        cout << "2. Burger" << endl;
        cout << "3. Sandwich" << endl;
        cout << "4. Rolls" << endl;
        cout << "5. Biryani" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> mainChoice;

        switch (mainChoice) {
            case 1:
                cout << "You selected Pizza. Choose type:\n";
                cout << "1. Margherita - ₹120 (15 min)\n";
                cout << "2. Farmhouse - ₹180 (20 min)\n";
                cout << "3. Peppy Paneer - ₹200 (25 min)\n";
                cin >> subChoice;

                if (subChoice == 1) { cout << "Enter quantity: "; cin >> quantity; 
                                    totalBill = totalBill + 120 * quantity; 
                                    totalTime = totalTime + 15 * quantity; }
                else if (subChoice == 2) { cout << "Enter quantity: "; cin >> quantity; 
                                    totalBill = totalBill + 180 * quantity; 
                                    totalTime = totalTime + 20 * quantity; }
                else if (subChoice == 3) { cout << "Enter quantity: "; cin >> quantity; 
                                    totalBill = totalBill + 200 * quantity; 
                                    totalTime = totalTime + 25 * quantity; }
                else { cout << "Invalid sub-choice.\n"; }
                break;

            case 2:
                cout << "You selected Burger. Choose type:\n";
                cout << "1. Veg Burger - ₹70 (10 min)\n";
                cout << "2. Cheese Burger - ₹90 (12 min)\n";
                cout << "3. Paneer Burger - ₹100 (15 min)\n";
                cin >> subChoice;

                if (subChoice == 1) { cout << "Enter quantity: "; cin >> quantity; 
                                    totalBill = totalBill + 70 * quantity; 
                                    totalTime = totalTime + 10 * quantity; }
                else if (subChoice == 2) { cout << "Enter quantity: "; cin >> quantity; 
                                    totalBill = totalBill + 90 * quantity; 
                                    totalTime = totalTime + 12 * quantity; }
                else if (subChoice == 3) { cout << "Enter quantity: "; cin >> quantity; 
                                    totalBill = totalBill + 100 * quantity; 
                                    totalTime = totalTime + 15 * quantity; }
                else { cout << "Invalid sub-choice.\n"; }
                break;

            case 3:
                cout << "You selected Sandwich. Choose type:\n";
                cout << "1. Club Sandwich - ₹80 (10 min)\n";
                cout << "2. Grilled Sandwich - ₹90 (12 min)\n";
                cin >> subChoice;

                if (subChoice == 1) { cout << "Enter quantity: "; cin >> quantity; 
                                    totalBill = totalBill + 80 * quantity; 
                                    totalTime = totalTime + 10 * quantity; }
                else if (subChoice == 2) { cout << "Enter quantity: "; cin >> quantity; 
                                    totalBill = totalBill + 90 * quantity; 
                                    totalTime = totalTime + 12 * quantity; }
                else { cout << "Invalid sub-choice.\n"; }
                break;

            case 4:
                cout << "You selected Rolls. Choose type:\n";
                cout << "1. Veg Roll - ₹60 (8 min)\n";
                cout << "2. Paneer Roll - ₹90 (12 min)\n";
                cin >> subChoice;

                if (subChoice == 1) { cout << "Enter quantity: "; cin >> quantity; 
                                    totalBill = totalBill + 60 * quantity;  
                                    totalTime = totalTime + 8 * quantity; }
                else if (subChoice == 2) { cout << "Enter quantity: "; cin >> quantity; 
                                    totalBill = totalBill + 90 * quantity; 
                                    totalTime = totalTime + 12 * quantity; }
                else { cout << "Invalid sub-choice.\n"; }
                break;

            case 5:
                cout << "You selected Biryani. Choose type:\n";
                cout << "1. Veg Biryani - ₹130 (20 min)\n";
                cout << "2. Paneer Biryani - ₹160 (25 min)\n";
                cin >> subChoice;

                if (subChoice == 1) { cout << "Enter quantity: "; cin >> quantity; 
                                    totalBill = totalBill + 130 * quantity; 
                                    totalTime = totalTime + 20 * quantity; }
                else if (subChoice == 2) { cout << "Enter quantity: "; cin >> quantity; 
                                    totalBill = totalBill + 160 * quantity; 
                                    totalTime = totalTime + 25 * quantity; }
                else { cout << "Invalid sub-choice.\n"; }
                break;

            default:
                cout << "Invalid main menu choice.\n";
        }

        cout << "\nWould you like to order more? (y/n): ";
        cin >> orderAgain;

    } while (orderAgain == 'y' || orderAgain == 'Y');

    cout << "\n===== Final Bill =====\n";
    cout << "Customer Name: " << customerName << endl;
    cout << "Total Amount: ₹" << totalBill << endl;
    cout << "Estimated Preparation Time: " << totalTime << " minutes\n";
    cout << "Thank you for your order!\n";

    return 0;
}