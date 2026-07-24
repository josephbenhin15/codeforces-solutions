#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
 
        for (int i = 0; i < n; i++) cin >> a[i];
 
        bool ok = false;
        for (int i = 0; i + 1 < n; i++) {
            if (abs(a[i] - a[i + 1]) <= 1) ok = true;
        }
 
        if (ok) {
            cout << 0 << "\n";
            continue;
        }
 
        int ans = 1e9;
 
        for (int b = 0; b < n - 1; b++) {
 
            vector<array<int,3>> left;
            int mn = a[b], mx = a[b];
 
            for (int l = b; l >= 0; l--) {
                mn = min(mn, a[l]);
                mx = max(mx, a[l]);
                left.push_back({l, mn, mx});
            }
 
            int ptr = (int)left.size() - 1;
 
            mn = a[b + 1];
            mx = a[b + 1];
 
            for (int r = b + 1; r < n; r++) {
                mn = min(mn, a[r]);
                mx = max(mx, a[r]);
 
                while (ptr > 0) {
                    auto cur = left[ptr - 1];
                    if (cur[2] + 1 >= mn && mx + 1 >= cur[1])
                        ptr--;
                    else
                        break;
                }
 
                auto cur = left[ptr];
                if (cur[2] + 1 >= mn && mx + 1 >= cur[1]) {
                    ans = min(ans, r - cur[0] - 1);
                }
            }
        }
 
        if (ans == 1e9) cout << -1 << "\n";
        else cout << ans << "\n";
    }
 
    return 0;
}