/*Write a program that demonstrates the difference between local and global
variables in C++. Use functions to show scope.*/
#include <iostream>
using namespace std;

int globalVar = 10;  // Global variable

void displayVariables() 
{
    int localVar = 20;  // Local variable
    cout << "Local Variable: " << localVar << endl;
    cout << "Global Variable: " << globalVar << endl;
}

int main() 
{
    cout << "Global Variable (in main): " << globalVar << endl;
    displayVariables();
    return 0;
}
