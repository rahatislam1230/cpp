#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string statement;
        cin >> statement;

        // Check if the statement contains "++"
        if (statement.find("++") != string::npos)
            x++;
        else
            x--;
    }

    cout << x;
    return 0;
}
