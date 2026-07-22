#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    long long x = 0;
    while (n--) {
        char c;
        long long y;
        cin >> c >> y;
 
        if (c == 'P')
            x += y;
        else {
            cout << (y > x ? "YES\n" : "NO\n");
            x = max(0LL, x - y);
        }
    }
}