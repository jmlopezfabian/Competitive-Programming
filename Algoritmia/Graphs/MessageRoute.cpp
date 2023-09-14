#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m; cin>>n>>m;
	//Lista de adyacencia
	vector<int> adj[n+1];
	vector<int> dist(n+1, INT_MAX), parent(n+1);
	int a,b;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	queue<int> q;
	dist[1] = 0;
	q.push(1);
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(int t: adj[x]){
			if(dist[t] == INT_MAX){
				dist[t] = dist[x] + 1;
				parent[t] = x;
				q.push(t);
			}
		}
	}

	if(dist[n] == INT_MAX){
		cout<<"IMPOSSIBLE"<<endl;
	}else{
		cout<<dist[n] + 1<<endl;
		vector<int> ans{n};
		while(ans.back() != 1){
			ans.push_back(parent[ans.back()]);
		}
		reverse(begin(ans), end(ans)); 
		for(auto i: ans){
			cout<<i<<" ";
		}
	}

}
