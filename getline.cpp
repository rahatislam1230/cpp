#include<iostream>
using namespace std;
int main(){
    string name;
    int age;
    string food;
    cout<<"What's your full name?: ";
    getline(cin >> ws , name);
    cout<<"whats your age?: ";
    cin>>age;
    cout<<"what do you like to eat?: ";
    getline(cin>>ws, food);
    cout<<"Your name is "<< name<<"\n";
    cout<<"your are "<< age <<"years old"<<"\n";
    cout<<"your fav food is "<<food<<"\n";
    return 0;

}
