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

/*================= FAST IO =================*/
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

/*================= CORE =================*/

void josben() {
    ll n;
    string s;
    cin >> n >> s;

    ll dc = count(s.begin(), s.end(), '-');  // dash count
    ll under = n - dc;

    ll ans = (dc / 2) * (dc - dc / 2) * under;

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