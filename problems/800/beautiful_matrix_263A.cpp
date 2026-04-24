#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, row, col;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> x;
            if (x == 1) {
                row = i;
                col = j;
            }
        }
    }

    int moves = abs(row - 2) + abs(col - 2);
    cout << moves << endl;

    return 0;
}
