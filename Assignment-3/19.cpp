/*Create a class BankAccount with data members like balance and member functions
like deposit and withdraw. Implement encapsulation by keeping the data members
private.*/
#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;  // Private data member

public:
    // Constructor to initialize balance to 0
    BankAccount() {
        balance = 0;
    }

    // Function to deposit money
    void deposit(float amount) {
        if (amount > 0) {
            balance = balance + amount;
            cout << "Amount deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    // Function to withdraw money
    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance = balance - amount;
            cout << "Amount withdrawn: " << amount << endl;
        } else {
            cout << "Invalid amount or insufficient balance." << endl;
        }
    }

    // Function to show balance
    void showBalance() {
        cout << "Your current balance is: " << balance << endl;
    }
};

int main() {
    BankAccount acc;

    acc.deposit(500);      // Add money
    acc.withdraw(200);     // Take out money
    acc.showBalance();     // Show remaining balance

    return 0;
}