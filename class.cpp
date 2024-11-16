#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[3];
    int ids[3];


    for (int i = 0; i < 3; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, names[i]);
        cout << "Enter ID of student " << i + 1 << ": ";
        cin >> ids[i];
        cin.ignore();
    }

    cout << "\nStored Information:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << ": " << names[i] << " (ID: " << ids[i] << ")" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    int intArray[4];
    float floatArray[4];


    float sum = 0;
    float product = 1;
    cout << "Enter 4 integer numbers:\n";
    for (int i = 0; i < 4; i++) {
        cout << "Integer " << i + 1 << ": ";
        cin >> intArray[i];
        sum += intArray[i];
        product *= intArray[i];
    }
    
    cout << "\nEnter 4 floating numbers:\n";
    for (int i = 0; i < 4; i++) {
        cout << "Float " << i + 1 << ": ";
        cin >> floatArray[i];
        sum += floatArray[i];
        product *= floatArray[i];
    }

    float average = sum / 8;

    cout << "\nResults:\n";
    cout << "Summation: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Multiplication (Product): " << product << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    float cgpaa[3];
    
    cout << "Enter the CGPAs of 3 students:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> cgpaa[i];
    }

    float lowestCGPA = cgpaa[0];

    for (int i = 1; i < 3; i++) {
        if (cgpaa[i] < lowestCGPA) {
            lowestCGPA = cgpaa[i];
        }
    }


    cout << "\nThe lowest CGPA is: " << lowestCGPA << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    int numbers[5];

    cout << "Enter 5 integer numbers:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }


    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            numbers[i] = 0;
        } else {
            numbers[i] = 1;
        }
    }


    cout << "\nModified Array:\n";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
