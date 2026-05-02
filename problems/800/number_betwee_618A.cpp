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
typedef unsigned long long ull;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpi;
typedef vector<pll> vpll;

/*================= FAST IO =================*/
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

/*================= STL MACROS =================*/
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()

#define lb lower_bound
#define ub upper_bound

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'

/*================= CONSTANTS =================*/
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 998244353;
const int N = 2e5 + 5;

/*================= DIRECTION VECTORS =================*/
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

/*================= LOOP SHORTCUTS =================*/
#define f(i,a,b) for (ll i = a; i < b; i++)
#define rf(i,a,b) for (ll i = a; i >= b; i--)

/*================= VECTOR UTILITIES =================*/
#define read(v) for (auto &x : v) cin >> x;
#define print(v) for (auto x : v) cout << x << " "; cout << endl;

/*================= MATH UTILITIES =================*/

ll gcdll(ll a, ll b) {
    return (b == 0 ? a : gcdll(b, a % b));
}

ll lcmll(ll a, ll b) {
    return (a / gcdll(a, b)) * b;
}

ll power(ll a, ll b, ll mod = MOD) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

ll modInverse(ll a, ll mod = MOD) {
    return power(a, mod - 2, mod);
}

ll nCr(ll n, ll r) {
    if (r > n) return 0;
    ll num = 1, den = 1;
    f(i,0,r) {
        num = (num * (n - i)) % MOD;
        den = (den * (i + 1)) % MOD;
    }
    return (num * modInverse(den)) % MOD;
}

/*================= CORE FUNCTION =================*/

void josben() {

    // Write your solution here
    ll x,y;
    cin>>x>>y;
    if(y>2*x){
       YES;
    }

   
    else NO;

}

/*================= MAIN =================*/

int main() {
    fastio;

    ll t = 1;
    cin >> t;      // comment this line if single test case

    while (t--) {
        josben();
    }

    return 0;
}
