#include <bits/stdc++.h>

using namespace std;

int n,m;
bool vis[1000][1000];
int a[1000][1000];


int dfs(int i, int j){
    vis[i][j] = true;
    int ans = a[i][j];
    if(i != 0 && a[i-1][j] != 0 && !vis[i-1][j]){ //No estamos en el borde izquierdo, el nodo es distinto de 0 y no lo hemos visitado
        ans += dfs(i-1,j); //Visitamos el nodom a la izquierda del nodo actual
    }
    if(i != n-1 && a[i+1][j] != 0 && !vis[i+1][j]){ //No estamos en el borde derecho, el nodo es distinto de 0 y no lo hemos visitado
        ans += dfs(i+1,j); //Visitamos el nodo a la derecha del nodo actual
    }
    if(j != 0 && a[i][j-1] != 0 & !vis[i][j-1]){ //No estamos en el borde superior, el nodo es distinto de 0 y no lo hemos visitado
        ans += dfs(i,j-1); //Visitamos el nodo superior al nodo actual
    } 
    if(j != m-1 && a[i][j+1] != 0 && !vis[i][j+1]){//No estamos en el borde inferior, el nodo es distinto de 0 y no lo hemos visitado
        ans += dfs(i,j+1);
    }
    return ans;
}

void solution(){
    cin>>n>>m;
    int aux;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>aux;
            a[i][j] = aux;
            vis[i][j] = false;
        }
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(!vis[i][j] && a[i][j] != 0){
                ans = max(ans,dfs(i,j));
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
}