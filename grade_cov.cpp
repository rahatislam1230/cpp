#include<iostream>
using namespace std;
int main(){
    char grade;
    cout<<"What letter grade?: ";
    cin>>grade;
    switch (grade) {
        case 'A':
            cout<<"Your did great!";
            break;
        case 'B':
            cout<<"your good try harder";
            break;
        case 'C':
            cout<<"You have to try even harder";
            break;
        case 'D':
            cout<<"You did poor";
            break;
        case 'F':
            cout<<"You have failed";
            break;
        default:
            cout<<"Only your char(A-F)";

    }

    return 0;
}
