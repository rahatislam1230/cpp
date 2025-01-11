#include <bits/stdc++.h>
using namespace std;
double calculateTax(double money, double taxRate, bool isEVUser) {
    double tax = (taxRate / 100) * money;

    if (isEVUser) {
        tax *= 0.95;
    }

    return tax;
}
int main() {
    double money, taxRate, taxAmount, totalAmount;
    char evUserChoice;
    bool isEVUser;
    cout << "Enter the amount of money: ";
    cin >> money;
    cout << "Enter the tax rate (as a percentage): ";
    cin >> taxRate;

    cout << "Are you an EV user? (y/n): ";
    cin >> evUserChoice;
    isEVUser = (evUserChoice == 'y' || evUserChoice == 'Y');
    taxAmount = calculateTax(money, taxRate, isEVUser);
    totalAmount = money + taxAmount;
    cout << "Tax Amount: " << taxAmount << endl;
    cout << "Total Amount after Tax: " << totalAmount << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void callbyfuntion(int a){
    a=20;
}
void callbyrefernce(int&b){
    b=30;
}
int main(){
    int x=10;
    int y=15;
    cout<<x<<y<<endl;
    callbyfuntion(x);
    callbyrefernce(y);
    cout<<x<<y<<endl;
    return 0;
    
}

#include <bits/stdc++.h>
using namespace std;
struct studnet{
    string name;
    int age;
    float cga;

};
int main() {
    int n;
    cout << "number of student?" << endl;
    cin >> n;
    studnet studnts[n];
    for (int i = 0; i < n; ++i) {
        cout <<"Enter the name [" << i << "]" << endl;
        cin >> studnts[i].name;
        cout << "Enter the age [" << i << "]" << endl;
        cin >> studnts[i].age;
        cout << "Enter the cpga [" << i << "]" << endl;
        cin >> studnts[i].cga;
    }
    for (int i = 0; i < n; ++i) {
        cout <<studnts[i].name;
        cout <<studnts[i].age;
        cout <<studnts[i].cga;
    }


}
#include <bits/stdc++.h>
using namespace std;
class teacher {
private:
    double salary;
public:
    string name;
    string dep;
    string subject;

    void changedept(string newdept) {
        dep = newdept;
    }

    void setsalary(double s) {
        salary = s;
    }

    double getsalary() {
        return salary;
    }
};

int main() {
    teacher t1;

    // Setting values
    t1.name = "rahat";
    t1.dep = "cse";
    t1.subject = "c++";
    t1.setsalary(25000);

    cout << t1.name << endl;
    cout << t1.dep << endl;
    cout << t1.subject << endl;
    cout << t1.getsalary() << endl;

    return 0;
}

