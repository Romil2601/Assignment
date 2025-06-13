/*Write a C++ program to perform matrix addition on two 2x2 matrices.*/
#include <iostream>
using namespace std;

int main() {
    int m1[2][2], m2[2][2], sum[2][2];

    // Input for first matrix
    cout << "Enter elements of 2x2 matrix 1:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> m1[i][j];
        }
    }

    // Input for second matrix
    cout << "Enter elements of 2x2 matrix 2:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> m2[i][j];
        }
    }

    // Performing matrix addition
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }

    // Displaying the result
    cout << "Sum of the two matrices:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
