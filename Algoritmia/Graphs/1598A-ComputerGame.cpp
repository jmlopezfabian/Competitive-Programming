#include <bits/stdc++.h>

using namespace std;

void dfs(int i, int j, vector<vector<char>> &grid, vector<vector<bool>> &visited, int n){
	visited[i][j] = true;
    //Derecha
	if(j != n - 1 && grid[i][j+1] != '1' && !visited[i][j+1])
		dfs(i,j+1,grid,visited,n);
    
    //cout<<i<<"-"<<j<<endl;
	//Arriba
	if(i != 0 && grid[i-1][j] != '1' && !visited[i-1][j])
		dfs(i-1,j,grid,visited,n);
	
	//Abajo
	if(i != 1 && grid[i+1][j] != '1' && !visited[i+1][j])
		dfs(i+1,j,grid,visited,n);

	//Superior-Derecha
	if(i != 0 && j != n-1 && grid[i-1][j+1] != '1' && !visited[i-1][j+1])
		dfs(i-1,j+1,grid,visited,n);
	//Inferior-Derecha
	if(i != 1 && j != n-1 && grid[i+1][j+1] != '1' && !visited[i+1][j+1])
		dfs(i+1,j+1,grid,visited,n);

	
}

void solution(){
    int n; cin>>n;
    string aux;
    vector<vector<char>> grid(2);
    vector<vector<bool>> visited(2);
    for(int i=0; i<2; i++){
        cin>>aux;
        for(int j=0; j<n; j++){
            grid[i].push_back(aux[j]);
            visited[i].push_back(false);
        }
    }
    pair<int,int> start = {0,0};
    pair<int,int> end = {1,n-1};

    dfs(start.first,start.second,grid,visited,n);
    
    if(visited[end.first][end.second])
	    cout<<"YES"<<endl;
    else
	    cout<<"NO"<<endl;

}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}
