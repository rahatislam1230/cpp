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
#include<iostream>
using namespace std;
int main(){
    int arr[10], *p = arr;
    int n = 10, key, i = 0, found = 0;

    cout << "Enter 10 elements: ";
    while(i < n){
        cin >> *(p + i);
        i++;
    }

    cout << "Enter number to search: ";
    cin >> key;

    i = 0;
    while(i < n){
        if(*(p + i) == key){
            cout << "Found at index: " << i << endl;
            found = 1;
            break;
        }
        i++;
    }

    if(!found)
        cout << "Not found." << endl;
}
#include<iostream>
using namespace std;
int main(){
    int arr[10], *p = arr;
    int i = 0, count = 0;

    cout << "Enter 10 numbers: ";
    while(i < 10){
        cin >> *(p + i);
        i++;
    }

    i = 0;
    while(i < 10){
        if(*(p + i) % 2 == 0)
            count++;
        i++;
    }

    cout << "Even numbers count: " << count << endl;
}
#include<iostream>
using namespace std;
int main(){
    int arr[10], *p = arr;
    int i = 0, count = 0, target;

    cout << "Enter 10 numbers: ";
    while(i < 10){
        cin >> *(p + i);
        i++;
    }

    cout << "Enter number to count: ";
    cin >> target;

    i = 0;
    while(i < 10){
        if(*(p + i) == target)
            count++;
        i++;
    }

    cout << target << " appears " << count << " times." << endl;
}
#include<iostream>
using namespace std;
int main(){
    int arr[10], *p = arr;
    int i = 0;

    cout << "Enter 10 numbers: ";
    while(i < 10){
        cin >> *(p + i);
        i++;
    }

    i = 0;
    while(i < 10){
        if(*(p + i) == 0)
            *(p + i) = -1;
        i++;
    }

    cout << "Modified array: ";
    i = 0;
    while(i < 10){
        cout << *(p + i) << " ";
        i++;
    }
    cout << endl;
}
#include<iostream>
using namespace std;
int main(){
    int arr[10], *p = arr;
    int i = 0;

    cout << "Enter 10 numbers: ";
    while(i < 10){
        cin >> *(p + i);
        i++;
    }

    cout << "Positive numbers: ";
    i = 0;
    while(i < 10){
        if(*(p + i) >= 0)
            cout << *(p + i) << " ";
        i++;
    }
    cout << endl;
}
#include<iostream>
using namespace std;
int main(){
    int arr[10], *p = arr;
    int i = 0, temp;

    cout << "Enter 10 numbers: ";
    while(i < 10){
        cin >> *(p + i);
        i++;
    }

    temp = *p;
    *p = *(p + 9);
    *(p + 9) = temp;

    cout << "After swapping first and last: ";
    i = 0;
    while(i < 10){
        cout << *(p + i) << " ";
        i++;
    }
    cout << endl;
}
#include<iostream>
using namespace std;
int main(){
    int arr[10], *p = arr;
    int i = 0;

    cout << "Enter 10 numbers: ";
    while(i < 10){
        cin >> *(p + i);
        i++;
    }

    i = 0;
    while(i < 10){
        *(p + i) *= 2;
        i++;
    }

    cout << "Doubled array: ";
    i = 0;
    while(i < 10){
        cout << *(p + i) << " ";
        i++;
    }
    cout << endl;
}
#include<iostream>
using namespace std;
int main(){
    int arr[10], *p = arr;
    int i = 0, j, count = 0;

    cout << "Enter 10 numbers: ";
    while(i < 10){
        cin >> *(p + i);
        i++;
    }

    i = 0;
    while(i < 10){
        j = i + 1;
        while(j < 10){
            if(*(p + i) == *(p + j)){
                count++;
                break;
            }
            j++;
        }
        i++;
    }

    cout << "Duplicate count: " << count << endl;
}
#include<iostream>
using namespace std;
struct Book{
    int id;
    string title;
    float price;
}a[3];
int main(){
    for(int i=0;i<3;i++){
        cin>>a[i].id>>a[i].title>>a[i].price;
    }
    for(int i=0;i<3;i++){
        cout<<a[i].id<<a[i].title<<a[i].price;
    }

}

#include<iostream>
using namespace std;
struct Book{
    int id;
    string title;
    float price;
}a[3];
int main(){
    for(int i=0;i<3;i++){
        cin>>a[i].id>>a[i].title>>a[i].price;
    }
    for(int i=0;i<3;i++){
       if(a[i].price>50000){
        cout<<"name:"<<a[i].id;
       }
    }

}

#include<iostream>
using namespace std;
bool isPrime(int n){
        if(n<=1){
            return false;
        }for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }

int main(){
   int arr[10] = {2, 3, 4, 5, 10, 13, 17, 20, 29, 31};
   for(int i=0;i<10;i++){
    if(isPrime(arr[i])){
        cout<<arr[i]<<"prime"<<endl;
    }else{
      cout<<arr[i]<<"not prime"<<endl;
    }
   }

}

#include<iostream>
using namespace std;

int main(){
   int arr[5] = {2, 3, 4, 5, 10};
   int *ptr=arr;
   for(int i=4;i>=0;i--){
    cout<<*(ptr+i)<<" ";
   }

}
#include<iostream>
using namespace std;
void change(int &a,int &b){
      int temp=a;
      a=b;
      b=temp;
}

int main(){
   int a=10,b=50;
   cout<<a<<" "<<b;
    change(a,b);

    cout<<a<<" "<<b;
}

#include<iostream>
using namespace std;
void change(int &a,int &b){
      int temp=a;
}

int main(){
   int arr[6] = {2, 3, 4, 5, 10,6};
   int *ptr=arr;
   for(int i=0;i<6;i++){
    if(i%2!=0){
        cout<<*(ptr+i)<<"odd"<<endl;
    }
   }


}
#include<iostream>
using namespace std;
bool isPrime(int n){
        if(n<=1){
            return false;
        }for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }

int countP(int *arr){
    int cot=0;
    for(int i=0;i<10;i++){
        if(isPrime(*(arr+i))){
            cot++;
        }
    }
    return cot;
}
int main(){
   int arr[10] = {2, 3, 4, 5, 10, 13, 17, 20, 29, 31};
   for(int i=0;i<10;i++){
    if(isPrime(arr[i])){
        cout<<arr[i]<<"prime"<<endl;
    }else{
      cout<<arr[i]<<"not prime"<<endl;
    }
   }
int p=countP(arr);
cout<<p<<endl;
cout<<p-arr[10];
}
#include<iostream>
using namespace std;

int main(){
   int arr[10] = {2, 3, 4, 5, 10, 13, 17, 20, 29, 31};
   int x=10;
   bool flag=false;
   for(int i=0;i<10;i++){
    if(arr[i]==x){
        cout<<"found!["<<i<<"]";
        flag=true;
        break;
    }
   }
   if(!flag){
    cout<<" not found!";
   }
}
#include<iostream>
using namespace std;

int main() {
    int arr[10] = {2, 3, 4, 5, 10, 13, 17, 20, 29, 31};
    int x = 10;
    int count = 0;
    for(int i = 0; i < 10; i++) {
        if(arr[i] == x) {
            count++;
        }
    }

    if(count > 0) {
        cout << "Found " << count << " times!";
    } else {
        cout << "Not found!";
    }

    return 0;
}
#include<iostream>
using namespace std;

int main() {
    int arr[10] = {2, 3, 4, 5, 10, 13, 10, 20, 29, 31};
    cout<<"first"<<endl;
    for(int p=0;p<10;p++){
        cout<<arr[p]<<" ";
    }
    for(int j=0;j<10;j++){
    for(int i=0;i<9;i++){
        if(arr[i]<arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
   cout<<"after"<<endl;
    for(int p=0;p<10;p++){
        cout<<arr[p]<<" ";
    }
}
#include<iostream>
using namespace std;

int main() {
    int arr[10] = {2, -3, -4, 55, 10, 13, -10, 20, 29, 31};
    cout<<"first"<<endl;
    for(int p=0;p<10;p++){
        cout<<arr[p]<<" ";
    }
    for(int j=0;j<10;j++){
    for(int i=0;i<9;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
   cout<<"after"<<endl;
    for(int p=0;p<10;p++){
        cout<<arr[p]<<" ";
    }
}
