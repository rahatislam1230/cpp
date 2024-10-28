#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"Enter any character:";
    cin>>ch;

    ((ch >= 'a' && ch <= 'z') || (ch >='A' && ch <='Z'))?
    cout<<"Alphabet" : cout<<"Not alphabet";

    return 0;
}
