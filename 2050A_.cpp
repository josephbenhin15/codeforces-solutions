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
 
        int sum = 0, ans = 0;
        bool stop = false;
 
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
 
            if (!stop && sum + s.size() <= m) {
                sum += s.size();
                ans++;
            } else {
                stop = true;
            }
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}