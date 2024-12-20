#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arry[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter elements:"<<endl;
            cin>>arry[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arry[i][j]<<" ";
        }cout<<endl;
    }
}
#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arry[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter elements:"<<endl;
            cin>>arry[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arry[i][j]<<" ";
        }cout<<endl;
    }  int transpose=0;
    cout<<"transpose"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
         cout<< arry[j][i]<<" ";
        }cout<<endl;
    }

}
#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arry[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter elements:"<<endl;
            cin>>arry[i][j];
        }
    }int sum1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum1+=arry[i][j];
            cout<<sum1<<" ";
        }cout<<endl;
    }  int sum=0;
    cout<<"transpose"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
         sum+=arry[j][i];
         cout<<sum<<" ";
        }cout<<endl;
    }cout<<"addition"<<endl;
    cout<<sum<<endl;
    cout<<sum1<<endl;
cout<<sum+sum1<<endl;
}
#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arry[n][m];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<"enter elements:"<<endl;
            cin>>arry[i][j];
        }
    }for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<arry[i][j]<<" ";
        }cout<<endl;
    }cout<<"raws are "<<endl;
    for(int i=0;i<n;++i){
        int row_sum=0;
        for(int j=0;j<m;++j){
            row_sum+=arry[i][j];
        }cout<<"sum of the row:"<<row_sum<<endl;
    }
    cout<<"columns are "<<endl;
    for(int i=0;i<n;++i){
        int col_sum=0;
        for(int j=0;j<m;++j){
            col_sum=arry[i][j];
        }cout<<"sum of the columns:"<<col_sum<<endl;
    }
}
#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int matrix1[n][m],matrix2[n][m],result[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Matrix first Elements:"<<endl;
            cin>>matrix1[i][j];
        }
    }for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Matrix 2nd Elements:"<<endl;
            cin>>matrix2[i][j];
        }
    }for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix1[i][j]<<" ";
        }cout<<endl;
    }for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix1[i][j]<<" ";
        }cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            result[i][j]=matrix1[i][j]+matrix2[i][j];
        }cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout<<result[i][j]<<" ";
        }cout<<endl;
    }
}
#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int matrix1[n][m],matrix2[n][m],result[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Matrix first Elements:"<<endl;
            cin>>matrix1[i][j];
        }
    }for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Matrix 2nd Elements:"<<endl;
            cin>>matrix2[i][j];
        }
    }for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix1[i][j]<<" ";
        }cout<<endl;
    }for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix1[i][j]<<" ";
        }cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<m;++k){
            result[i][j]+=matrix1[i][k]*matrix2[k][j];}
        }cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout<<result[i][j]<<" ";
        }cout<<endl;
    }
}
#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int matrix1[n][m],matrix2[n][m],result[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Matrix first Elements:"<<endl;
            cin>>matrix1[i][j];
        }
    }for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Matrix 2nd Elements:"<<endl;
            cin>>matrix2[i][j];
        }
    }for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix1[i][j]<<" ";
        }cout<<endl;
    }for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix1[i][j]<<" ";
        }cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<m;++k){
            result[i][j]+=matrix1[i][k]*matrix2[k][j];}
        }cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout<<result[i][j]<<" ";
        }cout<<endl;
    }
    int x;
    cout << "Enter the element to search for: ";
    cin>>x;

    bool flag = false;
    for(int i =0; i<n; i++){
        for(int j=0; j<m; j++){
            if(result[i][j] == x){
                flag = true;
                break;
            }
        }
        if(flag) break;
    }

    if(flag){
        cout<<"Element "<<x<<" found in the matrix."<<endl;
    } else{
        cout<<"Element "<<x<<" not found in the matrix."<<endl;
    }
}

