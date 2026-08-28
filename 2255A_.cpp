#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        long long k;
        string s;
 
        cin >> n >> k >> s;
 
        int red = 0, blue = 0;
 
        for (int i = 0; i < 2 * n; i++) {
            if (s[i] == '0')
                continue;
 
            int pos = i;
 
            if (s[(i + 1) % (2 * n)] == '0')
                pos = (i + 1) % (2 * n);
 
            if (pos % 2 == 0)
                blue++;
            else
                red++;
        }
 
        cout << red << " " << blue << '\n';
    }
 
    return 0;
}