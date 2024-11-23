#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double result = pow(2,3);
    cout << result;
    return 0;

}
#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter a number of A :"<<endl;
    cin>>a;
    cout<<"Enter a number of B :"<<endl;
    cin>>b;
    cout<<"Enter a number of C :"<<endl;
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"A is the greatest"<<endl;
        }else{
            cout<<"C is the greatest "<<endl;
        }
    }else{
        if(b>c){
            cout<<"B is the greatest"<<endl;
        }else{
            cout<<"C is the greatest "<<endl;
        }
    }
}
#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter a number of A :"<<endl;
    cin>>a;
    cout<<"Enter a number of B :"<<endl;
    cin>>b;
    cout<<"Enter a number of C :"<<endl;
    cin>>c;
    if(a<b){
        if(a<c){
            cout<<"A is the smallest"<<endl;
        }else{
            cout<<"C is the smallest "<<endl;
        }
    }else{
        if(b<c){
            cout<<"B is the smallest"<<endl;
        }else{
            cout<<"C is the smallest "<<endl;
        }
    }
}
#include <iostream>
using namespace std;

int main() {
    float x, y;
    cout << "Enter the value of X :" << endl;
    cin >> x;
    cout << "Enter the value of Y :" << endl;
    cin >> y;
    if(x>0 && y>-1){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
}
#include <iostream>
using namespace std;

int main() {
    int x;
    cout<<"Enter the value of x:";
    cin>>x;
    if(x>0){
        cout<<"Inserted value is positive ";
    }else if(x==0){
        cout<<"Inserted value is Zero";
    }else{
        cout<<"Inserted value is negative";
    }
}
