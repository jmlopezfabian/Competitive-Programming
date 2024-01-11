#include <bits/stdc++.h>

using namespace std;

int main(){
    long long mod 998244353;
    int n,m; cin>>n>>m;
    vector<vector<int>> adj (n+1);
    vector<vector<int>> dist(n+1,INT_MIN);

    int u,v;    
    for(int i=0; i<m; i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

}