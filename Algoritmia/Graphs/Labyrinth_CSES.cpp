#include <bits/stdc++.h>

using namespace std;


bool isValid(int x, int y, int n, int m){
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main(){
	int n,m; cin>>n>>m;

	vector<vector<char>> mat(n);
	vector<vector<int>> dist(n);
	vector<vector<pair<int,int>>> parent(n);

	char aux;
	pair<int,int> start;
	pair<int,int> end;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>aux;
			mat[i].push_back(aux);
			if(aux == 'A')
				start.first = i; start.second = j;
			if(aux == 'B')
				end.first = i; end.second = j;

			dist[i][j] = -1; //No visitado
		}
	}
	
	queue<pair<int,int>> q;
	q.push(start);
	dist[start.first][start.second] = 0;
	while(!q.empty()){
		pair<int,int> current = q.front(); q.pop();
		
		//Puedo ir a la izquierda?
		int x = current.fisrt, y = current.second;
		if(isValid(x, y-1,n,m) && mat[x][y-1] != '#' && dist[x][y-1] == -1){
			dist[x][y-1] = dist[x][y] + 1;
			parent[x][y-1] = parent[x][y];

			q.push({x,y-1});
		}
	}

	
}
