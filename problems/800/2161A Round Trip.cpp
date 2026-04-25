#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long R0, X, D;
        int n;
        cin >> R0 >> X >> D >> n;

        string s;
        cin >> s;

        long long L = R0, R = R0;
        int count = 0;

        for (char c : s) {
            if (c == '1') {
                L = max(0LL, L - D);
                R = R + D;
                count++;
            } else {
                long long newL = L;
                long long newR = min(R, X - 1);

                if (newL <= newR) {
                    L = max(0LL, newL - D);
                    R = newR + D;
                    count++;
                }
            }
        }

        cout << count << '\n';
    }

    return 0;
}
