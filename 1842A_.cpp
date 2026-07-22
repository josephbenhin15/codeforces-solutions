#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        long long sa = 0, sb = 0;
 
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            sa += x;
        }
 
        for (int i = 0; i < m; i++) {
            long long x;
            cin >> x;
            sb += x;
        }
 
        if (sa > sb)
            cout << "Tsondu\n";
        else if (sa < sb)
            cout << "Tenzing\n";
        else
            cout << "Draw\n";
    }
}