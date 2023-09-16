#include <bits/stdc++.h>

using namespace std;


bool isValid(int x, int y, int n, int m){
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main(){
	int n,m; cin>>n>>m;

	vector<vector<char>> mat(n);
	int dist[n][m];
	pair<int,int> parent[n][m];
	
	char aux;
	pair<int,int> start;
	pair<int,int> end;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>aux;
			mat[i].push_back(aux);
			if(aux == 'A'){
				start.first = i; 
				start.second = j;
			}
				
			if(aux == 'B'){
				end.first = i;
				end.second = j;
			}
			dist[i][j] = -1;
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
	
	}

	if(dist[end.first][end.second] == -1){
		cout<<"NO"<<"\n";
		return 0;
	}else{
		cout<<"YES"<<"\n";
		cout<<dist[end.first][end.second]<<"\n";
	}
	
	//for(int i=0; i<n; i++){
	//	cout<<"\n";
	//	for(int j=0; j<m;j++){
	//		cout<<parent[i][j].first<<"-"<<parent[i][j].second<<" ";
	//	}
	//}
	
	pair<int,int> current = end;
	string ans;
	while(current != start){
		//Imprimir la ruta
		//cout<<current.first<<"-"<<current.second<<endl;

		//Current -> actual /  parent[current.first][current.second] -> a donde me muevo
		//cout<<current.first<<"-"<<current.second<<"    "<< parent[current.first][current.second].first<<"-"<<parent[current.first][current.second].second<<endl;

		pair<int,int> direccion = {current.first - parent[current.first][current.second].first , current.second - parent[current.first][current.second].second};
		//cout<<direccion.first<<"/"<<direccion.second<<endl;
		current = parent[current.first][current.second];
		if(direccion.first == -1 && direccion.second == 0){
			ans.push_back('U');
		}
		if(direccion.first == 1 && direccion.second == 0){
			ans.push_back('D');
		}
		if(direccion.first == 0 && direccion.second == -1){
			ans.push_back('L');
		}
		if(direccion.first == 0 && direccion.second == 1){
			ans.push_back('R');
		}
	}
	reverse(ans.begin(), ans.end());
	cout<<ans<<"\n";
}
