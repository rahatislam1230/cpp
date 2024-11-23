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
#include <iostream>
using namespace std;
int main() {
    int year,rem_4,rem_100,rem_400;
    cout<<"enter a year: "<<endl;
    cin>>year;
    rem_4=year%4;
    rem_100=year%100;
    rem_400=year%400;
    if( (rem_4==0 && rem_100!=0)||rem_400==0 ){
        cout<<"it's a leap year "<<endl;
    }else{
        cout<<"it's not a leap year "<<endl;
    }


}
