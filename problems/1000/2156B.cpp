#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    vector<long long> a(q);
    for (auto &x : a) cin >> x;

    long long A = count(s.begin(), s.end(), 'A');
    long long B = count(s.begin(), s.end(), 'B');

    char last = s[0];
    vector<pair<char,long long>> seq;

    long long cur = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] == last) cur++;
        else {
            seq.push_back({last, cur});
            cur = 1;
            last = s[i];
        }
    }

    if (cur != 0) seq.push_back({last, cur});

    if (B == 0) {
        for (auto x : a) cout << x << "\n";
    }
    else {
        for (int i = 0; i < q; i++) {
            long long ans = 0;

            while (a[i] > 0) {
                for (auto &j : seq) {
                    if (a[i] == 0) break;

                    if (j.first == 'A') {
                        long long mn = min(j.second, a[i]);
                        ans += mn;
                        a[i] -= mn;
                    }
                    else {
                        if (a[i] == 0) break;

                        long long x = a[i];
                        long long p = 0;

                        while (x) {
                            x /= 2;
                            p++;
                        }

                        long long mn = min(p, j.second);
                        ans += mn;
                        a[i] /= (1LL << mn);
                    }
                }
            }

            cout << ans << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}