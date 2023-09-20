#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin>>n;
	vector<vector<int>> adj(n+1);
	int u,v;
	int start;
	for(int i=0;i<n-1;i++){
		cin>>u>>v;
		if(i==0){
			start = u;	
		}
		adj[u].push_back(v);
		//adj[v].push_back(u);
	}
	int x; cin>>x;
	//1.- Usar una bfs para saber la distancia desde root hasta cualquier nodo
	//2.- En el arreglo de distancias contamos cuantos tienen una distancia x
	
	queue<int> q;
	vector<int> dist(n+1, -1);
	dist[start] = 1;
	q.push(start);
	
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(int t: adj[x]){
			if(dist[t] == -1){
				dist[t] = dist[x] + 1;
				q.push(t);
			}
		}
	}
	int ans = 0;
	for(auto it: dist){
		if(it == x){
			ans ++;
		};
	}
	cout<<ans<<endl;
}
