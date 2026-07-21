#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, x, s = 0;
        cin >> n;
 
        for (int i = 0; i < 2 * n; i++) {
            cin >> x;
            s += x;
        }
 
        cout << (s & 1) << " " << min(s, 2 * n - s) << "\n";
    }
 
    return 0;
}