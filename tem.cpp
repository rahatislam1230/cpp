#include <iostream>

using namespace std;


int main() {
    int temp;

    cout << "Enter the temperature: ";
    cin >> temp;
    if(temp > 0 && temp < 30){
        cout << "the temperture is good";
    } else{
        cout << "the temperature is bad";
    }
    return 0;
}
