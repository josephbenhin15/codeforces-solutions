#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long x;
        cin >> x;
        cout << (x % 33 == 0 ? "YES" : "NO") << '\n';
    }
 
    return 0;
}