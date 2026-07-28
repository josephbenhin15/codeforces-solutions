#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    long long mxEven = 0;
    long long mnOdd = 1000000001LL;
 
    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
 
        if (i % 2 == 1)
            mnOdd = min(mnOdd, x);
        else
            mxEven = max(mxEven, x);
    }
 
    if (n % 2 == 0 && mxEven + 2 <= mnOdd)
        cout << "YES\n";
    else
        cout << "NO\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
        solve();
 
    return 0;
}