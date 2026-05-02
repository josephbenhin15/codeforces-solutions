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

/*================= CONSTANTS =================*/
const ll INF = 1e18;

/*================= CORE FUNCTION =================*/

void josben() {

    ll n, q;
    cin >> n >> q;

    vll a(n + 2), b(n + 2), pref(n + 2);

    for (ll i = 1; i <= n; i++) cin >> a[i];
    for (ll i = 1; i <= n; i++) cin >> b[i];

    a[n + 1] = 0;

   
    for (ll i = n; i >= 1; i--) {
        a[i] = max({a[i], a[i + 1], b[i]});
    }

   
    pref[0] = 0;
    for (ll i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + a[i];
    }

    
    while (q--) {
        ll L, R;
        cin >> L >> R;
        cout << pref[R] - pref[L - 1] << " ";
    }
    cout << endl;
}

/*================= MAIN =================*/

int main() {
    fastio;

    ll t = 1;
    cin >> t; 

    while (t--) {
        josben();
    }

    return 0;
}