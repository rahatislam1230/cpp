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
#include <iostream>
using namespace std;

int main() {
    int totalClasses, attendedClasses;
    cout << "Enter the total number of classes held: ";
    cin >> totalClasses;

    cout << "Enter the number of classes attended: ";
    cin >> attendedClasses;

    float attendancePercentage = (float)attendedClasses / totalClasses * 100;

    cout << "Attendance Percentage: " << attendancePercentage << "%" << endl;

    if (attendancePercentage < 80) {
        cout << "Not Allowed" << endl;
    } else {
        cout << "Allowed" << endl;
        if (attendancePercentage == 100) {
            cout << "You get 2 bonus marks!" << endl;
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) 
            sum += arr[i];
        }
    }

    cout << "Sum of elements at odd positions: " << sum << endl;
    if (sum % 2 == 0) {
        cout << "The summation is EVEN" << endl;
    } else {
        cout << "The summation is ODD" << endl;
    }

    return 0;
}

