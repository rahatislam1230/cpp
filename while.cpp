#include <iostream>

using namespace std;


int main() {
    string name;

    while(name.empty()){
        cout << "Enter your name: ";
        getline(cin,name);
    }
    cout << "Hello " << name;



    return 0;
}
#include <iostream>

using namespace std;


int main() {
    int number;

        cout << "Enter a positive #: ";
        cin >> number;

    while(number < 0){
        cout << "Enter a positive #: ";
        cin >> number;
    }
    cout << "the # is: " << number;

    return 0;
}
