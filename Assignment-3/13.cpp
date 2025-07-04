/*Write a C++ program that calculates the factorial of a number using recursion.*/
#include <iostream>
using namespace std;

int factorial(int n) 
{
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() 
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Error: Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    }

    return 0;
}