#include <iostream>
using namespace std;
int main() {
    float phy,che,it,math;
    int n,g,f,m;
    float cpga,sum=0;
    cout<<"Enter cpga of physics:"<<endl;
    cin>>phy;
    cout<<"Enter cpga of chemistry:"<<endl;
    cin>>che;
    cout<<"Enter cpga of it:"<<endl;
    cin>>it;
    cout<<"Enter cpga of math:"<<endl;
    cin>>math;
    cout<<"Enter physcis credit:"<<endl;
    cin>>n;
    cout<<"Enter chemistry credit:"<<endl;
    cin>>m;
    cout<<"Enter it credit:"<<endl;
    cin>>f;
    cout<<"Enter math credit:"<<endl;
    cin>>g;
    sum=(phy*n)+(che*m)+(it*f)+(math*g);
    cpga=sum/12;
    if(cpga>3.7){
        cout<<"good"<<endl;
    }else if(cpga>3.5){
        cout<<"not bad"<<endl;
    }else if(cpga>3.0){
        cout<<"need to improve"<<endl;
    }
    else{

        cout<<"poor"<<endl;


    }


}
#include <iostream>
using namespace std;
int main() {
    float phy,che,it,math;
    int n,g,f,m;
    float cpga,sum=0;
    cout<<"Enter cpga of physics & credit:"<<endl;
    cin>>phy>>n;
    cout<<"Enter cpga of chemistry & credit:"<<endl;
    cin>>che>>m;
    cout<<"Enter cpga of It & credit:"<<endl;
    cin>>it>>f;
    cout<<"Enter cpga of math & credit:"<<endl;
    cin>>math>>g;

    sum=(phy*n)+(che*m)+(it*f)+(math*g);
    cpga=sum/12;
    if(cpga>3.7){
        cout<<"good"<<endl;
    }else if(cpga>3.5){
        cout<<"not bad"<<endl;
    }else if(cpga>3.0){
        cout<<"need to improve"<<endl;
    }
    else{

        cout<<"poor"<<endl;


    }


}
