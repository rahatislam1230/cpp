#include <iostream>

using namespace std;

int main()
{
    int candiateage;

    cout << "Input the age of the candidate: ";
    cin>>candiateage;
    if(candiateage < 18){
        cout<<"Sorry , you are not eligible to caste your vote.";
        cout<<"you would be able to caste your vote after "<<18-candiateage<<" year"<<"\n";
    }
    else{
        cout<<"congrats!you are eligible to caste your vote";
    }
    return 0;
}
