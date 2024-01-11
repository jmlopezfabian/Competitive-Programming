#include <bits/stdc++.h>

using namespace std;


int main(){
	int n;cin>>n;
	int aux;
	vector<int> adj[n+1];
	vector<bool> visited(n+1,false);
	vector<int> dist(n+1,-1);
	int u;
	int start;
	vector<int> roots;
	for(int i=1; i<=n; i++){
		cin>>u;
		if(u != -1){
			adj[u].push_back(i);	
		}else{
			roots.push_back(i);
		}
	}

	//for(int i=1; i<=n;i++){
	//	cout<<"Padre: "<<i<<endl;
	//	for(auto j: adj[i]){
	//		cout<<j<<" ";
	//	}
	//	cout<<endl;
	//}
	//Implementar BFS e imprimir la distancia maxima desde la raiz
	for(auto it: roots){
		queue<int> q;
		dist[it] = 1;
		q.push(it);
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
	}
	

	int ans = -1;
	for(auto it: dist){
		//cout<<it<<" ";
		if(it > ans){
			ans = it;
		}
	}
	//cout<<endl;
	cout<<ans<<endl;

}
