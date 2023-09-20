#include <bits/stdc++.h>

using namespace std;

int maxDepth(int node,vector<int> adj[],vector<bool> &visited, int n){
	visited[node] = true;
	int current = 0;
	int left;
	
	for(auto u: adj[node]){
		left = maxDepth(u,adj,visited,n);
		current = max(current,left) + 1;
	}
	return current;
}

int main(){
	int n;cin>>n;
	int aux;
	vector<int> adj[n+1];
	vector<bool> visited(n+1,false);
	for(int i=1;i<=n; i++){
		cin>>aux;
		if(aux != -1){
			adj[aux].push_back(i);
		}
	}

	cout<<maxDepth(1,adj,visited,n)<<endl;


	//for(int i=1; i<= n; i++){
	//	cout<<endl;
	//	cout<<i<<endl;
	//	for(auto it: adj[i]){
	//		cout<<it<<" ";
	//	}
	//	cout<<"\n";
	//}
}
