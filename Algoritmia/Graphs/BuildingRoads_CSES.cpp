#include <bits/stdc++.h>

using namespace std;

void dfs(int current, vector<bool> &visited, vector<int> adj[]){
    if(visited[current]){
        return;
    }
    visited[current] = true;
    for(auto u: adj[current]){
        dfs(u,visited,adj);
    }
}

int main(){
    int n,m;cin>>n>>m;
    vector<int> adj[n+1];
    vector<bool> visited(n+1,false);
    for(int i=0; i<m;i++){
        int aux,aux2;
        cin>>aux;
        cin>>aux2;
        adj[aux].push_back(aux2);
        adj[aux2].push_back(aux);
    }
    vector<int> ans;
    int componentes = 0;
    for(int i=0; i<n; i++){
        if(!visited[i+1]){
            ans.push_back(i+1);
            dfs(i+1,visited,adj);
            componentes++;
            //cout<<"/"<<i+1<<endl;
        }
    }

    cout<<componentes-1<<"\n";
    for(int i=0;i+1<componentes; i++){
        cout<<ans[i]<<" "<<ans[i+1]<<"\n";
    }
}