/*Write a C++ program that demonstrates the use of variables and constants. Create
variables of different data types and perform operations on them.*/
#include <iostream>
using namespace std;

int main() {
    // Constants
    const float pi = 3.14;
    const int max_age = 100;

    // Variables
    int age;
    float radius, area;

    // Input
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculations
    area = pi * radius * radius;

    // Output
    cout << "Your age is: " << age << endl;
    cout << "The area of the circle is: " << area << endl;

    return 0;
}