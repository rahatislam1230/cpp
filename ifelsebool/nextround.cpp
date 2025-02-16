#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int count = 0;
    int check = v[k-1];  // Score of the k-th place

    for (int i = 0; i < n; i++) {
        if (v[i] >= check && v[i] > 0)
            count++;
        else
            break;
    }

    cout << count;
    return 0;
}
