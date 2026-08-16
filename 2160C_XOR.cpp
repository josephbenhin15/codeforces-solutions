#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int x;
        cin >> x;
 
        string n;
 
        if (x == 0) {
            n = "0";
        } else {
            while (x > 0) {
                n += char('0' + x % 2);
                x /= 2;
            }
            reverse(n.begin(), n.end());
        }
 
        string ans = "NO";
 
        for (int i = 1; i < 64; i++) {
            if (n.length() <= i) {
                string w = string(i - n.length(), '0') + n;
                string rev = w;
                reverse(rev.begin(), rev.end());
 
                bool B = (w == rev);
 
                if (i % 2 == 1)
                    B = B && (w[i / 2] == '0');
 
                if (B)
                    ans = "YES";
            }
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}