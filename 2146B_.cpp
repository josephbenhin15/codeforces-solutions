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
 
        vector<vector<int>> a(n);
        vector<int> c(m, 0);
 
        int s = 0;
 
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            while (k--) {
                int x;
                cin >> x;
                x--;
                if (c[x] == 0) s++;
                c[x]++;
                a[i].push_back(x);
            }
        }
 
        int r = (s == m);
 
        for (int i = 0; i < n; i++) {
            for (int x : a[i]) {
                c[x]--;
                if (c[x] == 0) s--;
            }
 
            if (s == m) r++;
 
            for (int x : a[i]) {
                if (c[x] == 0) s++;
                c[x]++;
            }
        }
 
        cout << (r >= 3 ? "YES" : "NO") << '\n';
    }
 
    return 0;
}