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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
/*================= TYPEDEFS =================*/
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
 
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<string> vs;
 
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
typedef vector<pii> vpi;
typedef vector<pll> vpll;
 
typedef map<ll,ll> mll;
typedef unordered_map<ll,ll> umll;
 
typedef set<ll> sll;
typedef multiset<ll> msll;
 
typedef priority_queue<ll> maxpq;
typedef priority_queue<ll, vector<ll>, greater<ll>> minpq;
 
template<typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;
 
/*================= PBDS =================*/
#define Oset tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define OMultiSet tree<pair<ll,ll>, null_type, less<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update>
 
/*================= FAST IO =================*/
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
 
/*================= STL MACROS =================*/
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
 
#define pb push_back
#define eb emplace_back
#define ins insert
#define rsz resize
 
#define ff first
#define ss second
 
#define mp make_pair
#define mkp make_pair
 
#define ft front()
#define bk back()
 
#define lb lower_bound
#define ub upper_bound
 
#define sor(v) sort(all(v))
#define rsor(v) sort(rall(v))
 
#define yes cout << "Yes\n"
#define no cout << "No\n"
 
/*================= CONSTANTS =================*/
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 998244353;
const int N = 1e6 + 5;
 
/*================= DIRECTION VECTORS =================*/
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
 
/*================= LOOP SHORTCUTS =================*/
#define f(i,a,b) for (ll i = a; i < b; i++)
#define rf(i,a,b) for (ll i = a; i >= b; i--)
 
/*================= VECTOR UTILITIES =================*/
#define read(v) for(auto &x : v) cin >> x;
#define print(v) for(auto x : v) cout << x << " "; cout << '\n';
 
/*================= BIT UTILITIES =================*/
#define setbit(x) __builtin_popcountll(x)
#define leading0(x) __builtin_clzll(x)
#define trailing0(x) __builtin_ctzll(x)
 
/*================= DEBUG =================*/
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif
 
/*================= MATH UTILITIES =================*/
 
ll gcdll(ll a, ll b) {
    return gcd(a, b);
}
 
ll lcmll(ll a, ll b) {
    return lcm(a, b);
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
 
/*================= DSU =================*/
 
struct DSU {
    vector<int> parent, sz;
 
    DSU(int n) {
        parent.resize(n + 1);
        sz.assign(n + 1, 1);
        iota(parent.begin(), parent.end(), 0);
    }
 
    int find(int x) {
        return parent[x] == x ? x : parent[x] = find(parent[x]);
    }
 
    bool unite(int a, int b) {
        a = find(a);
        b = find(b);
 
        if (a == b) return false;
 
        if (sz[a] < sz[b]) swap(a, b);
 
        parent[b] = a;
        sz[a] += sz[b];
 
        return true;
    }
 
    int size(int x) {
        return sz[find(x)];
    }
};
 
/*================= SEGMENT TREE =================*/
 
struct SegTree {
    int n;
    vector<ll> seg;
 
    SegTree(int n) {
        this->n = n;
        seg.assign(4 * n + 4, 0);
    }
 
    void build(int idx, int l, int r, vector<ll>& a) {
        if (l == r) {
            seg[idx] = a[l];
            return;
        }
 
        int mid = (l + r) >> 1;
 
        build(2 * idx, l, mid, a);
        build(2 * idx + 1, mid + 1, r, a);
 
        seg[idx] = seg[2 * idx] + seg[2 * idx + 1];
    }
 
    void update(int idx, int l, int r, int pos, ll val) {
        if (l == r) {
            seg[idx] = val;
            return;
        }
 
        int mid = (l + r) >> 1;
 
        if (pos <= mid)
            update(2 * idx, l, mid, pos, val);
        else
            update(2 * idx + 1, mid + 1, r, pos, val);
 
        seg[idx] = seg[2 * idx] + seg[2 * idx + 1];
    }
 
    ll query(int idx, int l, int r, int ql, int qr) {
        if (qr < l || r < ql) return 0;
 
        if (ql <= l && r <= qr) return seg[idx];
 
        int mid = (l + r) >> 1;
 
        return query(2 * idx, l, mid, ql, qr)
             + query(2 * idx + 1, mid + 1, r, ql, qr);
    }
};
 
/*================= CORE FUNCTION =================*/
 
string U(int i,int L,const string&s,const vector<int>&d,int m){
    if(i==L)return "";
    for(int x:d){
        if(x==(s[i]-'0')){
            string r=U(i+1,L,s,d,m);
        
        if(r!="-1"){return to_string(x)+r;
        }
    }else if(x>(s[i]-'0')){
        return to_string(x)+string(L-1-i,'0'+m);
    }
    }
    return "-1";
}
 
string D(int i,int L,const string&s,const vector<int>&d,int M){
    if(i==L)return "";
    for(int j=d.size()-1;j>=0;j--){
        int x=d[j];
        if(x==(s[i]-'0')){
            string r=D(i+1,L,s,d,M);
            if(r!="-1"){
                return to_string(x)+r;
            }
        }else if(x<(s[i]-'0')){
            if(i==0&&x==0&&L>1){
                continue;
            }
            return to_string(x)+string(L-1-i,'0'+M);
        }
    }
    return "-1";
}
 
void josben() {
 
    // Write your solution here
    string s;
    int n;
    cin>>s>>n;
    vi d(n);
    read(d);
    ll a=stoll(s);
    int L=s.length();
    int m=d[0];
    int M=d.back();
    int z=-1;
    for(int x:d){
        if(x>0){
            z=x;
            break;
        }
    }
    vll c;
    string u=U(0,L,s,d,m);
    if(u!="-1"){
        c.pb(stoll(u));
    }
    string w=D(0,L,s,d,M);
    if(w!="-1"){
        c.pb(stoll(w));
    }
    if(z!=-1){
        string p=to_string(z)+string(L,'0'+m);
        c.pb(stoll(p));
    }else if(m==0){
        c.pb(0);
    }
    if(L>1){
        string q=string(L-1,'0'+M);
        c.pb(stoll(q));
    }
    else if(m==0){
        c.pb(0);
    }
    long long A=-1;
    for(long long v:c){
        ll k=abs(a-v);
        if(A==-1||k<A){
            A=k;
        }
    }
    cout<<A<<'\n'; 
 
}
 
/*================= MAIN =================*/
 
int main() {
    fastio;
 
    ll t = 1;
    cin >> t;     // comment this line if single test case
 
    while (t--) {
        josben();
    }
 
    return 0;
}