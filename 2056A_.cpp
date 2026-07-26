#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<int> x(n), y(n);
 
        for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
        }
 
        int sx = 0, sy = 0;
        for (int i = 0; i < n; i++) {
            sx += x[i];
            sy += y[i];
        }
 
        int ans = 2 * (sx + sy + 2 * m - x[0] - y[0]);
 
        cout << ans << '\n';
    }
 
    return 0;
}