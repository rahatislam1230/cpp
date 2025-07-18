#include<iostream>
using namespace std;
main(){
    int arr[5];
    int i=0;
    float maxi=arr[0];
    float mini=arr[0];
    while(i<5){
        cin>>arr[i];
        i++;
    }
    i=0;
    while(i<5){
        if(arr[i]>maxi){
            maxi=arr[i];
       }
       if(arr[i]<mini){
            mini=arr[i];
        }
        i++;
    }
    cout<<"largest:"<<maxi<<endl;
    cout<<"lowest:"<<mini<<endl;

}
#include<iostream>
using namespace std;
main(){
    int arr[5];
    int i=0;
    while(i<5){
    cin>>arr[i];
    i++;
   }
   i=5-1;
   while(i>=0){
    cout<<arr[i]<<endl;
    i--;
   }


}
#include<iostream>
using namespace std;
main(){
    int a[5],b[5];
    int *pr=a;
    int *pr1=b;
    int i=0;
    while(i<5){
        cin>>*(pr+i);
        i++;
    } i=0;
    while(i<5){
        *(pr1+i)=*(pr+i);
        i++;
    }i=0;
    while(i<5){
        cout<<*(pr1+i);
        i++;
    }


}
