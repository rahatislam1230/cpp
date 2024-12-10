#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "hello";
    for(int i=0;i<str.size();++i){
        cout<<str[i]<<endl;
    }

}
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    cout<< str1<<endl;
    cout<<str2<<endl;

}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        cout<<s<<endl;
    }

}
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    string str_rev;
    for(int i= str.size()-1;i>=0;--i){
        str_rev.push_back(str[i]);
    }if(str==str_rev){
        cout<<"Yes";
    }else{
        cout<<"No";
    }



}
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    cout<<(int)s[s.size()-1];
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int last_digit = s[s.size()-1]-'0';
    cout<<last_digit;
}
