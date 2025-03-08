#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int b[n - 2];
        for (int i = 0; i < n - 2; i++) {
            cin >> b[i];
        }
        cout << "b[i] = " << b[0] << endl;
    }
}