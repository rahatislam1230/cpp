#include <bits/stdc++.h>
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
#include <bits/stdc++.h>
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
#include <bits/stdc++.h>
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
#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=2;i<n;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
   int n,r;
   cin>>n>>r;
   int ans = fact(n)/(fact(r)* fact(n-r));
   cout<<ans<<endl;
    return 0;

}
#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;++i){
        factorial*=i;
    }
    return factorial;
}

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
      for(int j=0;j<=i;j++){
          cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
      }cout<<endl;
  }

}
#include <bits/stdc++.h>
using namespace std;
int sum(int n) {
    int ans = 0;
    for (int i = 1; i < n; i++) {
        ans += 1;
    }
    return ans;
}

int main(){
  int n;
  cin>>n;
  cout<<sum(n)<<endl;

}
#include <bits/stdc++.h>
using namespace std;
int sum(int n) {
    int ans = 0;
    for (int i = 1; i <=n; i++) {
        ans += 1;
    }
    return ans;
}

int main(){
  int n;
  cin>>n;
  cout<<sum(n)<<endl;

}
#include <bits/stdc++.h>
using namespace std;

bool check(int x, int y, int z) {
    int a = max(x, max(y, z));
    int b, c;

    if (a == x) {
        b = y;
        c = z;
    } else if (a == y) {
        b = x;
        c = z;
    } else {
        b = x;
        c = y;
    }

    if (a * a == b * b + c * c) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if (check(x, y, z)) {
        cout << "pythagorean triple" << endl;
    } else {
        cout << "not a pythagorean triple" << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int binarytoDecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans+=x+y;
        x*=2;
        n/=10;
    }return ans;
}



int main() {
   int n;
   cin>>n;
   cout<<binarytoDecimal(n)<<endl;

}
#include <bits/stdc++.h>
using namespace std;
int octaltoDecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans+=x+y;
        x*=8;
        n/=10;
    }return ans;
}



int main() {
   int n;
   cin>>n;
   cout<<octaltoDecimal(n)<<endl;

}
#include <bits/stdc++.h>
using namespace std;

int hexatoDecimal(string n) {
    int ans = 0;
    int x = 1;
    int s = n.size();

    for (int i = s - 1; i >= 0; i--) {
        if (n[i] >= '0' && n[i] <= '9') {
            ans += x * (n[i] - '0');
        } else if (n[i] >= 'A' && n[i] <= 'F') {
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }

    return ans;
}

int main() {
    string n;
    cin >> n;
    cout << hexatoDecimal(n) << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;++i){
        factorial*=i;
    }
    return factorial;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }cout<<endl;
    }

}
#include <bits/stdc++.h>
using namespace std;
int sum(int a,int b ){
    int c = a+b;
    return c;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"the sum is "<<sum(x,y)<<endl;
    return 0;


}
#include <bits/stdc++.h>
using namespace std;
int sum(int a,int b );
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"the sum is "<<sum(x,y)<<endl;
    return 0;
}
int sum(int a,int b){
    int c=a+b;
    return c;
}
#include <bits/stdc++.h>
using namespace std;
int sum(int a,int b ){
    int c = a+b;
    return c;
}
void g(){
    cout<<"\n coded by rahat"<<endl;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"the sum is "<<sum(x,y)<<endl;
    g();
    return 0;


}
#include <bits/stdc++.h>
using namespace std;
void swap(int a,int b ){
    int temp =a;
    a=b;
    b=temp;

}
void g(){
    cout<<"\n coded by rahat"<<endl;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"the x is "<<x<<"y is "<<y<<endl;
    swap(x,y);
    cout<<"the x is "<<x<<"y is "<<y<<endl;

    g();
    return 0;


}
#include <bits/stdc++.h>
using namespace std;
void swap(int* a,int* b ){
    int temp =*a;
    *a=*b;
    *b=temp;

}
void g(){
    cout<<"\n coded by rahat"<<endl;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"the x is "<<x<<"y is "<<y<<endl;
    swap(&x,&y);
    cout<<"the x is "<<x<<"y is "<<y<<endl;

    g();
    return 0;


}
#include <bits/stdc++.h>
using namespace std;
void swapRefernce(int &a,int &b ){
    int temp = a;
     a= b;
     b=temp;

}
void g(){
    cout<<"\n coded by rahat"<<endl;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"the x is "<<x<<"y is "<<y<<endl;
    swapRefernce(x,y) ;
    cout<<"the x is "<<x<<"y is "<<y<<endl;

    g();
    return 0;


}
#include <bits/stdc++.h>
using namespace std;
int  product(int a,int b){
    return a*b;

}
void g(){
    cout<<"\n coded by rahat"<<endl;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"the product is "<<product(x,y)<<endl;

    g();
    return 0;

}
#include <bits/stdc++.h>
using namespace std;
int  matrix(int a,int b){
    cin>>a>>b;
    int arry[a][b];
    for(int i =0;i<a;++i){
        for(int j=0;j<b;++j){
            cout<<"Enter the element"<<endl;
            cin>>arry[i][j];
        }
    }
    for(int i =0;i<a;++i){
        for(int j=0;j<b;++j){
            cout<<arry[i][j]<<" ";
        }cout<<endl;
    }

}
void g(){
    cout<<"\n coded by rahat"<<endl;
}
int main(){
    int m,n;
    cout<<"Enter the value of row and column"<<endl;
    matrix(m,n);
    return 0;

}
#include <bits/stdc++.h>
using namespace std;

void inputMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }
}
void multiplyMatrices(int m1[][100], int m2[][100], int result[][100], int a, int b, int c) {
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < c; ++j) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < c; ++j) {
            for (int k = 0; k < b; ++k) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

int main() {
    int a, b, c;
    int m1[100][100], m2[100][100], result[100][100];
    cout << "Enter the number of rows for the first matrix: "<<endl;
    cin >> a;
    cout << "Enter the number of columns for the first matrix "<<endl;
    cin >> b;
    cout << "Enter the number of columns for the second matrix "<<endl;
    cin >> c;
    cout << "Input elements for the first matrix:" << endl;
    inputMatrix(m1, a, b);
    cout << "Input elements for the second matrix:" << endl;
    inputMatrix(m2, b, c);
    multiplyMatrices(m1, m2, result, a, b, c);
    
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
inline int product(int a,int b){
    return a*b;
}
int main() {
    int x,y;
    cin>>x>>y;
    cout<<"the product of x & y is :"<<product(x,y)<<endl;
    return 0;

}
#include <bits/stdc++.h>
using namespace std;
inline int product(int a,int b){
    static int c =0;
    c=c+1;
    return a*b+c;
}
int main() {
    int x,y;
    cin>>x>>y;
    cout<<"the product of x & y is :"<<product(x,y)<<endl;
    return 0;

}

