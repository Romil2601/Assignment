/*Write a C++ program that performs both implicit and explicit type conversions and
prints the results*/
#include <iostream>
using namespace std;

int main() {
    // Implicit conversion
    int intVar = 10;
    float floatVar = intVar;  // Implicit conversion from int to float
    cout << "Implicit conversion: " << floatVar << endl;

    // Explicit conversion
    floatVar = 9.78;
    intVar = (int)floatVar;  // Explicit conversion from float to int
    cout << "Explicit conversion: " << intVar << endl;

    return 0;
}