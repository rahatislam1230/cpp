#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }int sum =0;
    for(int i=0;i<n;++i) {
        sum = sum +a[i];
    }
    cout<<sum;

}

}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int a[n][m];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            for(int i = 0; i < n; ++i) {
              cout<<a[i][j]<<" ";
        }
        cout << endl;
    }


}
#include <bits/stdc++.h>
using namespace std;
const int  n=1e7;
int a[n];
int main() {
    a[n-1]=7;
    cout<<a[n-1];

}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int a[n][m][k];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int h = 0; h < k; ++h) {
                cin >> a[i][j][h];
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int h = 0; h < k; ++h) {
                cout << a[i][j][h] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
