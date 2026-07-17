#include <bits/stdc++.h>
using namespace std;
 
void josben() {
    int n;
    cin >> n;
 
    int even = 0, odd = 0;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0)
            even++;
        else
            odd++;
    }
 
    if (even > 0)
        cout << odd + 1 << '\n';
    else
        cout << odd - 1 << '\n';
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