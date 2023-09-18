#include <bits/stdc++.h>

using namespace std;

bool isBipartiteDFS(int current, vector<int> graph[], vector<int> &color, int c) {
    color[current] = c;
    for (int child : graph[current]) {
        if (color[child] == c) {
            return false; // No es bipartito, amigos en el mismo equipo
        }
        if (color[child] == 0 && !isBipartiteDFS(child, graph, color, 3 - c)) {
            return false; // No es bipartito
        }
    }
    return true;
}

int main(){
    int n,m; cin>>n>>m;
    vector<int> adj[n+1];
    vector<int> colors(n+1,0);
    
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=1;i<=n;i++){
        if(colors[i] == 0){
            if(!isBipartiteDFS(i,adj,colors,1)){
                cout<<"IMPOSSIBLE"<<endl;
                return 0;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<colors[i]<<" ";
    }
}