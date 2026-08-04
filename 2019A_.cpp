#include <bits/stdc++.h>
using namespace std;
 
void josben() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
    long long mx = LLONG_MIN;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
 
    if (n % 2 == 0) {
        cout << mx + n / 2 << '\n';
        return;
    }
 
    bool ok = false;
    for (int i = 0; i < n; i++) {
        if (a[i] == mx && (i + 1) % 2 == 1) {
            ok = true;
            break;
        }
    }
 
    cout << mx + (n + 1) / 2 - (!ok) << '\n';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
        josben();
 
    return 0;
}