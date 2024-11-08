#include<iostream>
using namespace std;

int main(){

    int i,j;
    for(i=1;i<=5;i++)
    {
        for (j=1;j<=5;j++) {
            if(j<=i){
                cout<<"*";
            }
            else
            {
                cout<<"";
            }

        }
        cout<<"\n";
    }



}
#include<iostream>
using namespace std;

int main(){

    int i,j;
    for(i=20;i>=1;i--)
    {
        for (j=1;j<=1;j--) {
            if(j<=i){
                cout<<"*";
            }
            else
            {
                cout<<"";
            }

        }
        cout<<"\n";
    }



}
