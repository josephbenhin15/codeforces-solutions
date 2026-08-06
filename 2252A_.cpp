#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
    map<long long, int> freq;
 
    long long sum = 0;
    int mx = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        freq[a[i]]++;
        mx = max(mx, freq[a[i]]);
    }
 
    if (mx <= (n + 1) / 2) {
        cout << sum << "\n";
        return;
    }
 
    vector<pair<long long, int>> v;
 
    for (auto x : freq)
        v.push_back(x);
 
    sort(v.rbegin(), v.rend());
 
    long long ans = 0;
 
    for (auto x : freq) {
        long long val = x.first;
        int cnt = x.second;
 
        if (cnt < 2)
            continue;
 
        for (int k = 2; k <= n; k++) {
            int len = k - 1;
            int limit = min(cnt, (len + 1) / 2 + 1);
 
            if (limit < 2)
                continue;
 
            int need = k - 2;
            long long cur = 2LL * val;
            int rem = limit - 2;
 
            for (auto p : v) {
                if (need == 0)
                    break;
 
                long long num = p.first;
                int f = p.second;
                int take = 0;
 
                if (num == val)
                    take = min(rem, need);
                else
                    take = min({f, len / 2, need});
 
                cur += 1LL * take * num;
                need -= take;
            }
 
            if (need == 0)
                ans = max(ans, cur);
        }
    }
 
    cout << ans << "\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
        solve();
 
    return 0;
}