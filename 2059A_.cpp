#include <bits/stdc++.h>
using namespace std;
 
void josben() {
    int n;
    cin >> n;
 
    vector<int> a(n), b(n);
    set<int> sa, sb;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sa.insert(a[i]);
    }
 
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        sb.insert(b[i]);
    }
 
    if (sa.size() + sb.size() < 4)
        cout << "NO\n";
    else
        cout << "YES\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
        josben();
 
    return 0;
}