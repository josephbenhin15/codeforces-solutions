/*■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■*

     ██╗ ██████╗ ███████╗        ██████╗ ███████╗███╗   ██╗
     ██║██╔═══██╗██╔════╝        ██╔══██╗██╔════╝████╗  ██║
     ██║██║   ██║███████╗        ██████╔╝█████╗  ██╔██╗ ██║
██   ██║██║   ██║╚════██║        ██╔══██╗██╔══╝  ██║╚██╗██║
╚█████╔╝╚██████╔╝███████║        ██████╔╝███████╗██║ ╚████║
 ╚════╝  ╚═════╝ ╚══════╝        ╚═════╝ ╚══════╝╚═╝  ╚═══╝

                         ── JB ──

■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■*/

// Author :: josephbenhind

#include <bits/stdc++.h>
using namespace std;

/*================= TYPEDEFS =================*/
typedef long long ll;
typedef vector<ll> vll;

/*================= FAST IO =================*/
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

/*================= LOOP SHORTCUTS =================*/
#define f(i,a,b) for (ll i = a; i < b; i++)
#define rf(i,a,b) for (ll i = a; i >= b; i--)
#define rep(i,n) for (ll i = 0; i < n; i++)
#define each(x,v) for (auto &x : v)

/*================= CORE SOLUTION =================*/

void josben() {
    ll n, k;
    cin >> n >> k;

    vll ve(n);
    each(x, ve) cin >> x;

    vll th(k + 1, 0);

    each(x, ve) {
        if (x < k) th[x]++;
    }

    ll ans = 0;

    f(i, 1, k) {
        if (i == k - i) {
            ans += th[i] / 2;
        } else {
            ll m = min(th[i], th[k - i]);
            ans += m;
            th[i] -= m;
            th[k - i] -= m;
        }
    }

    cout << ans << '\n';
}

/*================= MAIN =================*/

int main() {
    fastio;

    ll t;
    cin >> t;

    while (t--) {
        josben();
    }

    return 0;
}