#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    while (!a.empty() && a.back() == 0)
        a.pop_back();
 
    reverse(a.begin(), a.end());
    while (!a.empty() && a.back() == 0)
        a.pop_back();
    reverse(a.begin(), a.end());
 
    if (a.empty())
    {
        cout << 0 << '\n';
        return;
    }
 
    bool hasZero = false;
    for (const auto x : a)
        hasZero |= x == 0;
    if (hasZero)
        cout << 2 << '\n';
    else
        cout << 1 << '\n';
}
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
 
    return 0;
}