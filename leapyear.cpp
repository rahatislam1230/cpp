#include <iostream>

using namespace std;

int main()
{
    int year;

    cout<<"Enter any year:";
    cin>>year;

    (year % 4 == 0 && year % 100 !=0)? cout<<"is leap year"<<year :
        (year % 400 == 0)? cout<<"Leap year" : cout<<year<<"is not leap year";

    return 0;
}
