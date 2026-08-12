#include <bits/stdc++.h>
using namespace std;
 
const long long MOD = 998244353;
 
void josben() {
    int n;
    string s;
    cin >> n >> s;
 
    long long r = 0;
 
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            string c(n, '?');
            c[0] = char('0' + a);
            c[1] = char('0' + b);
 
            bool v = true;
 
            for (int i = 2; i < n; i++) {
                c[i] = char('0' + (1 - (c[i - 2] - '0')));
            }
 
            for (int i = 0; i < n; i++) {
                if (s[i] != '?' && s[i] != c[i]) {
                    v = false;
                    break;
                }
            }
 
            if (v) r++;
        }
    }
 
    cout << r % MOD << '\n';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        josben();
    }
 
    return 0;
}