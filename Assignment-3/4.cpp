/*Write a program that asks for two numbers and displays their sum. Ensure this is
done after setting up the IDE (like Dev C++ or CodeBlocks).*/

#include<iostream>
using namespace std;
int main() {
    float num1, num2, sum;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    sum = num1 + num2;
    cout << "The sum is: " << sum << endl;
    return 0;
}