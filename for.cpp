#include<iostream>
using namespace std;

int main(){

    double i;
    for (i=4;i<=40;i+=4)
    {
        cout<<i<<"\n";
    }


}
#include<iostream>
using namespace std;

int main(){

    double i;
    for(i=20;i>=2;i-=2)
    {
        cout<<i<<"\n";
    }



}
#include<iostream>
using namespace std;

int main(){

    double i = 20;
    while(i>=2)
    {
        cout<<i<<"\n";
        i-=2
    }
    


}
#include<iostream>
using namespace std;

int main(){

    double n1=0,n2=1,n3,i;
    cout<<n1<<n2;
    for(i=1;i<=10;i++)
    {
        n3=n1+n2;
        n1=n3;
        n2=n3;
        cout<<n3;
    }




}
#include<iostream>
using namespace std;

int main(){

    double n,i,f;
    cout<<"Enter a number"<<"\n";
    cin>>n;
    f=n;
    for(i=1;i<n;i++)
    {
        f=f*i;
    }
    cout<<"Factorial value is: "<<f;



}
