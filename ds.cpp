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
