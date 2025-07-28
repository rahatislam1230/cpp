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
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
            {2, 5, 3},
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
// no output
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    char a[20] = "Hello";
    char b[20] = "World";

    // strcat
    strcat(a,b);         // a = "HelloWorld"
    cout << "strcat: " << a << endl;

    // strcpy
    char c[20]="RAHATT TTTT";
    //strcpy(c, b);         // c = "World"
    //cout << "strcpy: " << c << endl;

    // strcmp
    int cmp = strcmp(a, c); // Compare "HelloWorld" and "World"
    cout << "strcmp: " << cmp << endl;

    // strlen
   cout << "strlen(a): " << strlen(a) << endl; // "HelloWorld" = 10 chars

   // C++ string
    string s = "Artificial";
    cout << "length(): " << s.length() << endl;

   // substr
    cout << "substr(0, 5): " << s.substr(1, 5) << endl;

    return 0;
}

