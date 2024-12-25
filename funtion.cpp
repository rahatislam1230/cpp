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


