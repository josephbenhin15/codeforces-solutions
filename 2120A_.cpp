#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
 
        bool x = false;
 
        x |= (a + c + e == b && b == d && d == f);
        x |= (c + e == a && d == f && b + d == a);
        x |= (b + d + f == a && a == c && c == e);
        x |= (d + f == b && c == e && a + c == b);
 
        cout << (x ? "YES" : "NO") << '\n';
    }
 
    return 0;
}