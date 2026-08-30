#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here 
	int t;
	cin>>t;
	while(t--){
    int n; 
    cin>>n;
    vector<int>a(n);
    for(auto &x:a){ 
        cin>>x;
    }
    int ans=gcd(a[0],a[n-1]);
    cout<<ans<<endl;
	    
	}
    return 0;
}