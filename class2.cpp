#include<iostream>
using namespace std;
int main() {
    string name[2];
    int Id[2];
    for(int i=0;i<2;i++){
        cout<<"Enter your name["<<i<<"] :"<<endl;
        cin>>name[i];
    }
    for(int i=0;i<2;i++){
        cout<<"Enter your Id["<<i<<"] :"<<endl;
        cin>>Id[i];
    }
    for(int i=0;i<2;i++){
        cout<<"Enter your name["<<i<<"] :"<<name[i]<<endl;
        cout<<"Enter your Id["<<i<<"] :"<<Id[i]<<endl;

    }

}
#include<iostream>
using namespace std;
int main(){
    float cpga[3];
    float lowestcpga=0;
    for(int i=0;i<3;i++){
        cout<<"Enter a student cpga["<<i<<"] :"<<endl;
        cin>>cpga[i];
    }
    lowestcpga=cpga[0];
    for(int i=0;i<3;i++){
        if(cpga[i]<lowestcpga){
            lowestcpga= cpga[i];
        }
    }
    cout<<"lowestcpga"<<lowestcpga<<endl;





}
#include <iostream>
using namespace std;

int main() {
    
    int intArray[4];
    float floatArray[4];


    float sum = 0;
    float product = 1;
    cout << "Enter 4 integer numbers:\n";
    for (int i = 0; i < 4; i++) {
        cout << "Integer " << i + 1 << ": ";
        cin >> intArray[i];
        sum += intArray[i];
        product *= intArray[i];
    }

    // Input floating-point numbers
    cout << "\nEnter 4 floating numbers:\n";
    for (int i = 0; i < 4; i++) {
        cout << "Float " << i + 1 << ": ";
        cin >> floatArray[i];
        sum += floatArray[i];
        product *= floatArray[i];
    }

    float average = sum / 8;

    cout << "\nResults:\n";
    cout << "Summation: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Multiplication (Product): " << product << endl;

    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int num[5];
    for(int i =0;i<5;i++){
        cout<<"enter a number["<<i<<"] :"<<endl;
        cin>>num[i];
    }
    for(int i =0;i<5;i++){
        if(num[i]%2==0){
            num[i]=0;
        }else{
            num[i]=1;
        }
        cout<<num[i]<<endl;
    }


}
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <=100; i++) {
        cout << i<< " ";
        if (i % 2 == 0) {
            cout << i<< " is even." << " ";
        } else {
            cout << i<< " is odd " << " ";
        }
    }
}
#include <iostream>
using namespace std;

int main() {
    int num[6];
    cout << "Enter 6 numbers:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "numbers [" << i << "]: ";
        cin >> num[i];
    }

    for (int i = 0; i < 6; i++) {

        if (i % 2 == 0) {
            num[i] *= 2;
        }
        else {
            num[i] *= 3;
        }
        if (num[i] % 5 == 0) {
            cout << "index " << i << ": " << num[i] << " is divisible by 5" << endl;
        } else {
            cout << "index " << i << ": " << num[i] << " is not divisible by 5" << endl;
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <=100; i++) {
        cout << i<< " ";
        if (i % 2 == 0) {
            cout << i<< " is even." << " ";
            break;
        } else {
            cout << i<< " is odd " << " ";
            continue;
        }
    }
}
