#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const int SQ = 500;
 
ll josben() {
    int n;
    cin >> n;
 
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
 
    ll ans = 0;
 
    for (int i = 0; i < n; i++) {
        if (a[i] >= SQ) {
            for (ll k = 1; i + a[i] * k < n; k++) {
                int pos = i + a[i] * k;
                if (a[pos] == k) ans++;
            }
 
            for (ll k = 1; i - a[i] * k >= 0; k++) {
                int pos = i - a[i] * k;
                if (a[pos] == k) ans++;
            }
        } else {
            for (ll k = 1; k < SQ && i + a[i] * k < n; k++) {
                int pos = i + a[i] * k;
                if (a[pos] == k) ans++;
            }
        }
    }
 
    return ans; 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
 
    int t;
    cin >> t;
 
    while (t--) {
        cout << josben() << '\n';
    }
 
    return 0;
}