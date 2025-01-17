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
    
