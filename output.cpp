#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
            {1, 2, 3},
            {2, 5, 6},
            {4, 8, 9}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (matrix[i][j] % 2 == 0) {
                break;// Exit inner loop if an even number is found
            }

            cout << matrix[i][j] << " ";

            continue; // Skip the rest of the loop (not needed here but included for example)
        }
        cout << endl; // Move to the next row
    }

    return 0;// 1
}
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
            {1, 2, 3},
            {2, 5, 6},
            {4, 8, 9}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (matrix[i][j] % 2 == 0) {
                continue; // Exit inner loop if an even number is found
            }

            cout << matrix[i][j] << " ";

            break; // Skip the rest of the loop (not needed here but included for example)
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
//1
//5
//9
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
            {1, 5, 3},
            {2, 5, 6},
            {4, 8, 9}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (matrix[i][j] % 2 == 0) {
                continue; // Exit inner loop if an even number is found
            }

            cout << matrix[i][j] << " ";

            continue; // Skip the rest of the loop (not needed here but included for example)
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
//1 5 3
//5
//9
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
            {1, 5, 3},
            {2, 5, 6},
            {4, 8, 9}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (matrix[i][j] % 2 == 0) {
                break; // Exit inner loop if an even number is found
            }

            cout << matrix[i][j] << " ";

            continue; // Skip the rest of the loop (not needed here but included for example)
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
//1 5 3
