#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b;
        cin >> a >> b;
 
        if (a >= b)
            cout << a << '\n';
        else
            cout << max(0LL, 2 * a - b) << '\n';
    }
 
    return 0;
}