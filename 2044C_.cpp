#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
 
        int ans = 0, rem = 0;
 
        ans += min(a, m);
        rem += m - min(a, m);
 
        ans += min(b, m);
        rem += m - min(b, m);
 
        ans += min(c, rem);
 
        cout << ans << '\n';
    }
 
    return 0;
}