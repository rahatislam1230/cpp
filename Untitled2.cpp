#include <iostream>
using namespace std;
void swapRefernce(int &a,int &b ){
    int temp = a;
     a= b;
     b=temp;

}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"the x is "<<x<<"y is "<<y<<endl;
    swapRefernce(x,y) ;
    cout<<"the x is "<<x<<"y is "<<y<<endl;


    return 0;


}
