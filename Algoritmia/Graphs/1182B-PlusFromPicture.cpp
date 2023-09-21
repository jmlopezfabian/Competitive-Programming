#include <bits/stdc++.h>

using namespace std;

void dfs(int i, int j, vector<vector<char>> &grid, vector<vector<bool>> &visited, int rows, int columns){
	visited[i][j] = true;
	//No estamos en el borde derecho
	if(j != columns - 1 && grid[i][j+1] != '.' && !visited[i][j+1])
		dfs(i,j+1,grid,visited,rows,columns);
	
	//NO estamos en el borde izquierdo
	if(j != 0 && grid[i][j-1] != '.' && !visited[i][j-1])
		dfs(i, j-1, grid, visited, rows, columns);
	
	//No estamos en el borde inferior
	if(i != 0 && grid[i-1][j] != '.' && !visited[i-1][j])
		dfs(i-1,j,grid,visited,rows,columns);
	
	//No estamos en el borde superior
	if(i != rows - 1 && grid[i+1][j] != '.' && !visited[i+1][j])
		dfs(i+1,j,grid,visited,rows,columns);
}

int main(){
	int h,w; cin>>h>>w;
	vector<vector<char>> grid(h);
	pair<int,int> center;
	vector<vector<bool>> visited(h);
	char aux;
	
	for(int i=0; i<h;i++){
		for(int j=0; j<w; j++){
			cin>>aux;
			grid[i].push_back(aux);
			visited[i].push_back(false);
		}
	}
	
	int num_centers = 0;
	for(int i=1; i<h-1;i++){
		for(int j=1; j<w-1; j++){
			if(grid[i][j] == '*'){
				if(grid[i+1][j] == '*' && grid[i-1][j] == '*' && grid[i][j+1] == '*' && grid[i][j-1] == '*'){
					center = {i,j};
					num_centers ++;
				}
			}
		}	
	}
	if(num_centers != 1){
		cout<<"NO"<<"\n";
		return 0;
	}

	int com_conexas = 0;
	for(int i=0; i<h;i++){
		for(int j=0; j<w; j++){
			if(grid[i][j] == '*' && !visited[i][j]){
				dfs(i,j,grid,visited,h,w);
				com_conexas++;
			}
		}
	}
	
	if(com_conexas != 1){
		cout<<"NO"<<"\n";
		return 0;
	}

	//Ahora veremos si la cruz es valida
		
	//Verificamos si el camino de la derecha es valido
	for(int j=center.second; j<w; j++){
			//Verificamos si no tenemos un camino hacia abajo
		if(grid[center.first][j] == '*'){
			if(grid[center.first+1][j] == '*' && j!=center.second){
				cout<<"NO"<<"\n";
				return 0;
			}
			//Verificamos si no hay un camino hacia arriba
			if(grid[center.first-1][j] == '*' && j!=center.second){
				cout<<"NO"<<"\n";
				return 0;
			}
		}else{
			break;
		}
		
	}

	//Verificamos si el camino de la izquierda es valido
	for(int j=center.second; j>=0; j--){
		//Verificamos si no tenemos un camino hacia abajo
		if(grid[center.first][j] == '*'){
			if(grid[center.first+1][j] == '*' && j!=center.second){
				cout<<"NO"<<"\n";
				return 0;
			}
			//Verificamos si no hay un camino hacia arriba
			if(grid[center.first-1][j] == '*' && j!=center.second){
				cout<<"NO"<<"\n";
				return 0;
			}
		}else{
			break;
		}
		
	}

	//Verificamos si el camino hacia arriba es valido
	for(int i=center.first; i>=0; i--){
		//Verificar si no tenemos un camino a la derecha
		if(grid[i][center.second] == '*'){
			if(grid[i][center.second + 1] == '*' && i != center.first){
				cout<<"NO"<<"\n";
				return 0;
			}
			if(grid[i][center.second - 1] == '*' && i != center.first){
				cout<<"NO"<<"\n";
				return 0;
			}
		}else{
			break;
		}
	}

	//Verificamos si el camino hacia abajo es valido
	for(int i=center.first; i<h; i++){
		//Verificar si no tenemos un camino a la derecha
		if(grid[i][center.second] == '*'){
			if(grid[i][center.second + 1] == '*' && i != center.first){
				cout<<"NO"<<"\n";
				return 0;
			}
			if(grid[i][center.second - 1] == '*' && i != center.first){
				cout<<"NO"<<"\n";
				return 0;
			}
		}else{
			break;
		}
	}

	cout<<"YES"<<"\n";

}

