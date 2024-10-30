#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int lower, higher;

    cout << "Enter two numbers (lower and higher): ";
    cin >> lower >> higher;

    cout << "Armstrong numbers between " << lower << " and " << higher << " are:\n";

    for (int i = lower + 1; i < higher; i++) {
        int temp1 = i;
        int temp2 = i;
        int n = 0;
        int result = 0;
        while (temp1 != 0) {
            temp1 /= 10;
            ++n;
        }
        while (temp2 != 0) {
            int remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }
        if (result == i) {
            cout << i << "\n";
        }
    }

    return 0;
}

