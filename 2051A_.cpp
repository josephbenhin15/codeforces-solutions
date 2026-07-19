#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ans = 0;
        cin >> n;
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
        for (int i = 0; i < n - 1; i++)
            ans += max(0, a[i] - b[i + 1]);
        cout << ans + a.back() << '\n';
    }
}