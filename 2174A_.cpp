#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s, t;
    cin >> s >> t;
 
    vector<int> cnt(26, 0);
 
   
    for (char c : t) {
        cnt[c - 'a']++;
    }
 
  
    for (char c : s) {
        cnt[c - 'a']--;
 
        if (cnt[c - 'a'] < 0) {
            cout << "Impossible\n";
            return;
        }
    }
 
   
    string tp;
    for (int i = 0; i < 26; i++) {
        tp += string(cnt[i], char('a' + i));
    }
 
    
    string ans;
    int i = 0, j = 0;
 
    while (i < (int)s.size() && j < (int)tp.size()) {
        if (s[i] <= tp[j]) {
            ans += s[i++];
        } else {
            ans += tp[j++];
        }
    }
 
    // Remaining characters
    while (i < (int)s.size()) {
        ans += s[i++];
    }
 
    while (j < (int)tp.size()) {
        ans += tp[j++];
    }
 
    cout << ans << '\n';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        solve();
    }
 
    return 0;
}