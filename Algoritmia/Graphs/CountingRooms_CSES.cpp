#include <bits/stdc++.h>

using namespace std;

void dfs(int i, int j, vector<vector<char>> &grid, vector<vector<bool>> &visited, int rows, int columns){
	visited[i][j] = true;

	//No estamos en el borde derecho
	if(j != columns - 1 && grid[i][j+1] != '#' && !visited[i][j+1])
		dfs(i,j+1,grid,visited,rows,columns);
	
	//NO estamos en el borde izquierdo
	if(j != 0 && grid[i][j-1] != '#' && !visited[i][j-1])
		dfs(i, j-1, grid, visited, rows, columns);
	
	//No estamos en el borde inferior
	if(i != 0 && grid[i-1][j] != '#' && !visited[i-1][j])
		dfs(i-1,j,grid,visited,rows,columns);
	
	//No estamos en el borde superior
	if(i != rows - 1 && grid[i+1][j] != '#' && !visited[i+1][j])
		dfs(i+1,j,grid,visited,rows,columns);
}

int main(){
	int n,m; cin>>n>>m;
	vector<vector<char>> grid(n);
	vector<vector<bool>> visited(n);
	char aux;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>aux;
			grid[i].push_back(aux);
			visited[i].push_back(false);
		}
	}
	
	int ans = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(grid[i][j] == '.' && !visited[i][j]){
				dfs(i,j,grid,visited,n,m);
				ans++;
			}
		}
	}

	cout<<ans<<endl;
}
