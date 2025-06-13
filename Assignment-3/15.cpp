/*Write a C++ program that accepts an array of integers, calculates the sum and
average, and displays the results.*/
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    int sum = 0;

    // Input
    cout << "Enter " << SIZE << " integers:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    // Calculate average using float literal to avoid integer division
    float average = sum / (SIZE * 1.0f);

    // Output
    cout << "\nSum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}