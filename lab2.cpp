#include <iostream>
using namespace std;
struct Employee {
    string name;
    int id;
    string designation;
    double salary;
};
int main() {
    Employee employee[5];
    double givensalary;
    for(int i=0;i<5;++i){
        cout<<"Enter the name["<<i+1<<"]: ";
        cin>>employee[i].name;
        cout<<"Enter the Id["<<i+1<<"]: ";
        cin>>employee[i].id;
        cout<<"Enter the designation["<<i+1<<"]: ";
        cin>>employee[i].designation;
        cout<<"Enter the salary["<<i+1<<"]: ";
        cin>>employee[i].salary;
    }
    cout<<"enter salary:"<<endl;
    cin>>givensalary;
    for(int i=0;i<5;++i){
            if(employee[i].salary>givensalary){
        cout<<"Enter the name["<<i+1<<"]: "<<employee[i].name;
        cout<<"Enter the Id["<<i+1<<"]: "<<employee[i].id;
        cout<<"Enter the designation["<<i+1<<"]: "<<employee[i].designation;
        cout<<"Enter the salary["<<i+1<<"]: "<<employee[i].salary;
    }}
}
