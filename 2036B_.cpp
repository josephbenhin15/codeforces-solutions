#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<long long> a(k);
 
        for (int i = 0; i < k; i++) {
            int x, y;
            cin >> x >> y;
            a[x - 1] += y;
        }
 
        sort(a.rbegin(), a.rend());
 
        long long s = 0;
        for (int i = 0; i < min(n, k); i++)
            s += a[i];
 
        cout << s << '\n';
    }
 
    return 0;
}