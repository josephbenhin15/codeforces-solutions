#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void josben() {
    string str;
    cin >> str;
 
    for (int i = 1; i < str.size(); i++) {
        if (str[i - 1] == str[i]) {
            cout << 1 << '\n';
            return;
        }
    }
 
    cout << str.size()<< '\n';
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        josben();
    }
    return 0;
}