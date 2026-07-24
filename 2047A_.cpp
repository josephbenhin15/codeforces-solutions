#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int ring = 1;
        int rem = 1;
        int ans = 0;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            while (x > rem) {
                x -= rem;
                ring++;
                rem = (ring == 1 ? 1 : 8 * (ring - 1));
            }
 
            if (x == rem) {
                ans++;
                ring++;
                rem = (ring == 1 ? 1 : 8 * (ring - 1));
            } else {
                rem -= x;
            } 
        }
 
        cout << ans << "\n";
    }
 
    return 0;
}