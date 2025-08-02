#include<iostream>
using namespace std;
struct Product{
    string name;
    int id;
    int price;
};
void Section(Product*arr,int n){
    for(int i=0;i<n-1;i++){
            int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j].price<arr[j+1].price){
                mini=j;
            }
        }
        Product temp=arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
    }
}
void Binary(Product*arr,int key,int n){
            int low=0,high=n-1,mid=0;
            
            bool flag=false;
            for(int i=0;i<n;i++){
                if(low<=high){
                        if(arr[mid].id==key){
                    mid=(high+low)/2;
                    flag=true;
     cout << "Found:"<< arr[mid].name <<"ID: " << arr[mid].id << "Price: " << arr[mid].price << endl;
                        }
                }else if(arr[i].id<key){
                    low=mid+1;
                }else{
                     high=mid-1;
                }
            }
            if(!flag){
                cout<<"not found";
            }
}
int main(){
for(int i=0;i<n-1;i++){
            int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[j+1]){
                mini=j;
            }
        }
        Product temp=arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
    }
}
    int n=4;
    Product* arr= new Product[n];
     for(int i = 0; i < n; i++) {
        cin >> arr[i].name >> arr[i].id >> arr[i].price;
    }
    Section(arr, n);
      for(int i = 0; i < n; i++) {
        cout << arr[i].name << " ID: " << arr[i].id << " Price: " << arr[i].price << endl;
    }
    int key;
    cin >> key;
    Binary(arr, key, n);
}
