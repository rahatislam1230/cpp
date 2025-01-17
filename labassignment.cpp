1....................
#include <iostream>
using namespace std;
int main() {
    int matrix1[3][3], matrix2[3][3], sum[3][3], diff[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix1[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    cout << "Matrix addition result:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matrix subtraction result:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
2............
#include <iostream>
using namespace std;
int main() {
    int matrix[4][4], tans[4][4];
    for (int i = 0; i <4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            tans[j][i]=matrix[i][j];
        }
    }
    cout << "Matrix " << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "transpose matrix:" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << tans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
3..........
#include <iostream>
using namespace std;
int main() {
    int matrix[5][5], rowsum[5] = {0}, colsum[5] = {0};
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matrix[i][j];
            rowsum[i] += matrix[i][j];
            colsum[j] += matrix[i][j];
        }
    }
    cout << "Sum of each row:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Row : " << rowsum[i] << endl;
    }
    cout << "Sum of each column:" << endl;
    for (int j = 0; j < 5; ++j) {
        cout << "Column : " << colsum[j] << endl;
    }

    return 0;
}
4.............
#include <iostream>
using namespace std;
int main() {
    int matrix1[3][2], matrix2[2][3], result[3][3] = {0};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> matrix1[i][j];
        }
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix2[i][j];
}
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "Resulting matrix after multiplication:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
}
14........................
#include <iostream>
using namespace std;
class BankAccount{
private:
    string accountNumber;
    string accountHolderName;
    double balance;
public:
    BankAccount(string accnum,string acchold,double initalbalance){
        accountNumber=accnum;
        accountHolderName=acchold;
        balance=initalbalance;
}
    void deposite(double amount){
        if(amount>0){
            balance+=amount;
            cout<<"Amount deposited successfully"<<endl;
        }else{
            cout<<"Invalid deposit amount"<<endl;
        }
    }
    void withdraw(double amount){
        if(amount>0&& amount<=balance){
            balance-=amount;
            cout<<"Amount withdrawn successfully!"<<endl;
        }else if(amount>balance){
            cout<<"Insufficient balance!"<<endl;
        }else{
            cout<<"invalid amount"<<endl;
        }
    }
    void display(){
        cout<<"Account number: "<<accountNumber<<endl;
        cout<<"Account holder name:"<<accountHolderName<<endl;
        cout<<"Current balance:"<<balance<<endl;
    }
};
int main(){
    BankAccount account("165884","rahat",100000);
    account.display();
    account.deposite(150);
    account.withdraw(100);
    account.withdraw(100);
    account.display();


}
15.....................
    
#include <iostream>
using namespace std;
class Rectangle{
private:
    double length;
    double width;
public:
    void setdimesions(double l,double w){
        if(l>0 && w>0){
            length=l;
            width=w;
        }else{
            cout<<"Invalid dimesions"<<endl;
        }
    }
    double calcuateArea(){
            return length*width;
        }
    double calcuatePerimeter(){
            return 2*(length+width);
        }

    void display(){
        cout<<"length:"<<length<<endl;
        cout<<"Width:"<<width<<endl;
        cout<<"Area: "<< calcuateArea()<<endl;
        cout<<"Perimeter:"<<calcuatePerimeter()<<endl;
    }
};

int main(){
    Rectangle rec;
    double length,width;
    cout<<"Enter the length of Rectangle:";
    cin>>length;
    cout<<"Enter the width Rectangle:";
    cin>>width;
    rec.setdimesions(length,width);
    rec.display();
}
6.......
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num){
    for(int i=2;i< sqrt(num);i++){
        if(num%2==0){
            return false;
        }else{
            return true;
        }
    }
}
int main() {
    int a,b;
    cin>>a>>b;
    for(int i=a;i<b;i++){
        if(isPrime(i)==true){
            cout<<i<<endl;
        }
    }
}
9............
#include <iostream>
using namespace std;
void fib(int n){
    int t1=0;
    int t2=1;
    int next_term;
    for(int i=1;i<n;i++){
        cout<<t1<<endl;
        next_term= t1+t2;
        t1=t2;
        t2=next_term;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    fib(n);

}
5............
#include <iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=2;i<n;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
   int n;
   cin>>n;
   int ans = fact(n);
   cout<<ans<<endl;
    return 0;

}
7.........
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
8..........
#include <iostream>
using namespace std;
int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int totalSum = arraySum(arr, n);
    cout << "The sum of the elements in the array is: " << totalSum << endl;

    return 0;
}
10.....
#include<iostream>
using namespace std;
struct Student{
    string name;
    int roll;
    float marks[3];
};
int main(){
    Student student[5];
    for(int i=0;i<5;++i){
        cout<<"Enter the details ["<<i<<"]: "<<endl;
        cout<<"name:";
        cin>>student[i].name;
        cout<<"roll number:";
        cin>>student[i].roll;
        for(int j=0;j<3;++j){
            cout<<"Enter the marks:";
            cin>>student[i].marks[j];
        }cout<<endl;
    }
     for(int i=0;i<5;++i){
        cout<<"Enter the details ["<<i<<"]: "<<endl;
        cout<<"name:"<<student[i].name;
        cout<<"roll number:"<<student[i].roll;
        for(int j=0;j<3;++j){
            cout<<"marks:"<<student[i].marks[j];
        }
    }

}
    
    




