#include <bits/stdc++.h>

using namespace std;


bool isValid(int x, int y, int n, int m){
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main(){
	int n,m; cin>>n>>m;

	vector<vector<char>> mat(n);
	vector<vector<int>> dist(n);
	pair<int,int> parent[n][m];
	
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

			dist[i].push_back(-1); //No visitado
		}
	}
	
	queue<pair<int,int>> q;
	q.push(start);
	dist[start.first][start.second] = 0;
	while(!q.empty()){
		pair<int,int> current = q.front();
		int x = current.first;
		int y =  current.second;
		q.pop();
		//Izquierda
		if(isValid(x, y-1,n,m) && mat[x][y-1] != '#' && dist[x][y-1] == -1){
			dist[x][y-1] = dist[x][y] + 1;
			parent[x][y-1] = {x,y};
			q.push({x,y-1});
		}

		//Derecha
		if(isValid(x,y+1,n,m) && mat[x][y+1] != '#' && dist[x][y+1] == -1){
			dist[x][y+1] = dist[x][y] + 1;
			parent[x][y+1] = {x,y};
			q.push({x,y+1});
		}

		//Abajo
		if(isValid(x+1,y,n,m) && mat[x+1][y] != '#' && dist[x+1][y] == -1){
			dist[x+1][y] = dist[x][y] + 1;
			parent[x+1][y] = {x,y};
			q.push({x+1,y});
		}

		//Arriba
		if(isValid(x-1,y,n,m) && mat[x-1][y] != '#' && dist[x-1][y] == -1){
            dist[x-1][y] = dist[x][y] + 1;
            parent[x-1][y] = {x,y};
            q.push({x-1,y});
        }
	
	cout<<dist[end.first][end.second]<<endl;
	
}
