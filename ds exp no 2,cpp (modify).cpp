#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    int A[10][10], B[10][10], C[10][10];
    int choice;

    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;

    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];

    cout << "Enter rows and columns of Matrix B: ";
    cin >> r2 >> c2;

    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];

    cout << "\nMatrix Operations Menu:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Transpose of Matrix A\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {

        case 1: // Addition
            if (r1 == r2 && c1 == c2) {
                for (int i = 0; i < r1; i++)
                    for (int j = 0; j < c1; j++)
                        C[i][j] = A[i][j] + B[i][j];

                cout << "Result of Addition:\n";
                for (int i = 0; i < r1; i++) {
                    for (int j = 0; j < c1; j++)
                        cout << C[i][j] << " ";
                    cout << endl;
                }
            } else {
                cout << "Addition not possible!\n";
            }
            break;

        case 2: // Subtraction
            if (r1 == r2 && c1 == c2) {
                for (int i = 0; i < r1; i++)
                    for (int j = 0; j < c1; j++)
                        C[i][j] = A[i][j] - B[i][j];

                cout << "Result of Subtraction:\n";
                for (int i = 0; i < r1; i++) {
                    for (int j = 0; j < c1; j++)
                        cout << C[i][j] << " ";
                    cout << endl;
                }
            } else {
                cout << "Subtraction not possible!\n";
            }
            break;

        case 3: // Multiplication
            if (c1 == r2) {
                for (int i = 0; i < r1; i++) {
                    for (int j = 0; j < c2; j++) {
                        C[i][j] = 0;
                        for (int k = 0; k < c1; k++)
                            C[i][j] += A[i][k] * B[k][j];
                    }
                }

                cout << "Result of Multiplication:\n";
                for (int i = 0; i < r1; i++) {
                    for (int j = 0; j < c2; j++)
                        cout << C[i][j] << " ";
                    cout << endl;
                }
            } else {
                cout << "Multiplication not possible!\n";
            }
            break;

        case 4: // Transpose
            cout << "Transpose of Matrix A:\n";
            for (int i = 0; i < c1; i++) {
                for (int j = 0; j < r1; j++)
                    cout << A[j][i] << " ";
                cout << endl;
            }
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
