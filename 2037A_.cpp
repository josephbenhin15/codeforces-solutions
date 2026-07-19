#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        unordered_map<int, int> freq;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }
 
        int ans = 0;
        for (auto &[num, cnt] : freq) {
            ans += cnt / 2;
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}