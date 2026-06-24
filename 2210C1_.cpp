#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void josephbenhind() {
    int n;
    cin >> n;
 
    vector<ll> a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
 
    int ans = 0;
 
    if (__gcd(a[0], a[1]) < a[0]) ans++;
 
    for (int i = 1; i < n - 1; i++) {
        ll A = __gcd(a[i - 1], a[i]);
        ll B = __gcd(a[i], a[i + 1]);
 
        ll g = __gcd(A, B);
        ll l = A / g * B;
 
        if (l < a[i]) ans++;
    }
 
    if (__gcd(a[n - 2], a[n - 1]) < a[n - 1]) ans++;
 
    cout << ans << '\n';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        josephbenhind();
    }
}