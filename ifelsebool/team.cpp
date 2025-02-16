#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, sum=0;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2) sum++;
    }
    cout<<sum<<endl;
}

