#include <iostream>
using namespace std;
int main() {
    int matrix1[3][2], matrix2[2][3], result[3][3] = {0};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> matrix1[i][j];
        }
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "Resulting matrix after multiplication:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
