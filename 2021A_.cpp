#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int T, n, lst[55];
    cin>>T;
    while (T--)
    {
        cin>>n;
        for (int i = 0;i<n;i++) cin>>lst[i];
        sort(lst, lst+ n, greater<>());
        for (int i = n - 1;i>=1;i--)
            lst[i - 1] = (lst[i - 1] + lst[i]) / 2;
        cout<<lst[0]<<"\n";
    }
    return 0;
}