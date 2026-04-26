#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>&b){
    int n=b.size();
    unordered_map<int,vector<int>> groups;
    for(int i=0;i<n;i++) groups[b[i]].push_back(i);
    vector<int> a(n);
    int label=1;
    for(auto &entry:groups){
        int freq=entry.first;
        vector<int>& idxs=entry.second;
        if((int)idxs.size()%freq!=0) return {-1};
        for(int i=0;i<idxs.size();i++){
            a[idxs[i]]=label;
            if((i+1)%freq==0) label++;
        }
    }
    return a;
}

int main(){
   
   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> b(n);
        for(int i=0;i<n;i++) cin>>b[i];
        vector<int> ans=solve(b);
        if(ans.size()==1 && ans[0]==-1) cout<<-1<<"\n";
        else{
            for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}