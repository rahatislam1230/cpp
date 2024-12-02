question1........
#include <iostream>
using namespace std;
int main() {
    int marks;
    cout<<"Enter the marks between (0-100): "<<endl;
    cin>>marks;
    if(marks>=90){
        cout<<"Your grade is A "<<endl;
    }else if (marks>=80){
        cout<<"Your grade is B "<<endl;
    }else if (marks>= 70 && marks< 80){
        cout<<"Your grade is C "<<endl;
    }else if (marks>=60){
        cout<<"Your grade is D "<<endl;
    }else{
        cout<<"Your grade is F"<<endl;
    }
    return 0;
}
queestion 2...........
#include <iostream>
using namespace std;
int main() {
    int year,rem_4,rem_100,rem_400;
    cout<<"Enter the year : "<<endl;
    cin>>year;
    rem_4=year%4;
    rem_400=year%400;
    rem_100=year%100;
    if((rem_4==0 && rem_100!=0) || rem_400==0){
        cout<<"It's a leap year "<<endl;
    }else{
        cout<<"It's not a leap year "<<endl;
    }

    return 0;
}
question 3.....
#include <iostream>
using namespace std;
int main() {
    int n,sum=0;
    cout<<"Enter number: "<<endl;
    cin>>n;
    for(int i=2;i<n;i+=2){
        sum+=i;
    }
    cout<<"total sum of even number is :"<<sum<<endl;

    return 0;
}
question 4......
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Give the size of the array: "<<endl;
    cin>>n;
    int arry[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the array [" << i << "]: ";
        cin >> arry[i];
    }
    float max = arry[0];
    float min = arry[0];
    for (int i = 1; i < n; i++) {
        if (arry[i] > max) {
            max = arry[i];
        }
        if (arry[i] < min) {
            min = arry[i];
        }
    }
    cout << "Maximum : " << max << endl;
    cout << "Minimum : " <<min << endl;

    return 0;
}
question 5.......
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Give the size of the array: "<<endl;
    cin>>n;
    int arry[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the array number [" << i << "]: "<<endl;
        cin >> arry[i];
    }
    cout << "Reversed array: "<<endl;
    for (int i = n - 1; i >= 0; i--){
        cout << arry[i] << endl;
        
}
}
quetion 6.....
#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of armstrong: "<<endl;
    cin>>n;
    int orginal_n=n;
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }if(sum==orginal_n){
        cout<<"It's a Armstrong number "<<endl;
    } else{
        cout<<"It's not Armstrong number "<<endl;
    }

    return 0;
}
question 7...
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of Fibonacci : ";
    cin >> n;
    int a = 0, b = 1;
    cout << "Fibonacci Sequence:  " <<endl;
    for (int i = 0; i < n; i++) {
        cout << a << endl;
        int sum = a + b;
        a = b;
        b = sum;
    }


    return 0;
}
question 8....
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the fibonacci number: "<<endl;
    cin>>n;
    if(n<=0){
        cout<<"Invalid input"<<endl;
        return 0;
    }
    int a = 0, b=1,fib=0;
    if(n==1){
        cout << "The" <<n<< "th Fibonacci number is: "<<a<< endl;
    }else if(n==2){
        cout << "The " << n << "th Fibonacci number is: " << b << endl;
    }else{
        for(int i=3;i<n;i++){
            fib=a+b;
            a=b;
            b=fib;
        }
        cout << "The " << n << "th Fibonacci number is: " << b << endl;
    }

    return 0;
}
question 9.........
#include <iostream>
using namespace std;

int main() {
    double temp, converted;
    char choice;
    cout << "Enter 'C' for Celsius to Fahrenheit for 'F' or vice versa: ";
    cin >> choice;

    if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: "<<endl;
        cin >> temp;
        converted = (temp * 9/5) + 32;
        cout << "Temperature in Fahrenheit: " << converted << endl;
    } else if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: "<<endl;
        cin >> temp;
        converted = (temp - 32) * 5/9;
        cout << "Temperature in Celsius: " << converted << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

question 10.....
#include <iostream>
using namespace std;

int main() {
    char a;
    cout << "Enter a character: ";
    cin >> a;
    cout << "ASCII value of : "<<int(a)<<endl;
    return 0;
}
question 11....
#include <iostream>
using namespace std;

int main() {
    double num;
    cout<<"Enter a double number: "<<endl;
    cin>>num;
    int intnum=int(num);
    cout<<"Converted integer:"<<intnum<<endl;
    intnum+=10;
    cout<<"Resut after adding 10: "<<intnum<<endl;

    return 0;
}
question 12......
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "give the size of the array: "<<endl;
    cin >> n;

    if (n <= 0) {
        cout << "Size of the array must be a positive !" << endl;
        return 0;
    }
    int arry[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the array number [" << i << "]: "<<endl;
        cin >> arry[i];
    }
    for (int i = 0; i < n; i += 2) {
        if (arry[i] > 10) {
            arry[i] = 0;
        }
    }
    cout << "Modified array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arry[i] <<endl;
    }

    return 0;
}


    

question 13.....
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : "<<endl;
    cin >> n;
    cout << "Prime numbers between 1 and " << n << " are:" << endl;
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false; 
                break; 
            }
        }
        if (isPrime) {
            cout << i << endl;
        }
    }

    cout << endl;
    return 0;
}
  
