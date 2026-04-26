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
typedef pair<ll,ll> pll;

/*================= FAST IO =================*/
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

/*================= STL MACROS =================*/
#define all(x) (x).begin(), (x).end()
#define sz(x) (ll)(x).size()
#define pb push_back
#define endl '\n'

/*================= LOOP SHORTCUTS =================*/
#define f(i,a,b) for (ll i = a; i < b; i++)
#define rf(i,a,b) for (ll i = a; i >= b; i--)

/*================= CONSTANTS =================*/
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 998244353;

/*================= CORE FUNCTION =================*/

void josben() {

    ll n;
    cin >> n;

    vector<ll> b(n + 1);
    f(i,1,n+1) cin >> b[i];

    vector<ll> d(n + 1);
    b[0] = 0;

    f(i,1,n+1)
        d[i] = b[i] - b[i - 1];

    vector<ll> a(n + 1);
    ll next_value = 1;

    f(i,1,n+1) {

        ll pos = i - d[i];

        if (pos == 0)
            a[i] = next_value++;
        else
            a[i] = a[pos];
    }

    f(i,1,n+1)
        cout << a[i] << " ";

    cout << endl;
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