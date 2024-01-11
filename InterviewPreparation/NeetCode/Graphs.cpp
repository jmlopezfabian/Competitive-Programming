#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void dfs(int i, int j, vector<string> mapa, vector<vector<bool>> &visited, int rows, int columns){
        visited[i][j] = true;

    	//No estamos en el borde derecho
    	if(j != columns - 1 && mapa[i][j+1] != '0' && !visited[i][j+1])
    		dfs(i,j+1,mapa,visited,rows,columns);
    
    	//NO estamos en el borde izquierdo
    	if(j != 0 && mapa[i][j-1] != '0' && !visited[i][j-1])
    		dfs(i, j-1, mapa, visited, rows, columns);
    
    	//No estamos en el borde inferior
    	if(i != 0 && mapa[i-1][j] != '0' && !visited[i-1][j])
    		dfs(i-1,j,mapa,visited,rows,columns);
    
    	//No estamos en el borde superior
    	if(i != rows - 1 && mapa[i+1][j] != '0' && !visited[i+1][j])
    		dfs(i+1,j,mapa,visited,rows,columns);
    }    
        
    int numIslands(vector<string>& grid) {
        int ans = 0;
        int rows = grid.size();
        int columns = grid[0].size();

        vector<vector<bool>> visited(rows);
        for(int i=0; i<rows; i++){
            for(int j=0; j<columns; j++){
                visited[i].push_back(false);
            }
        }

        for(int i=0; i<rows; i++){
            for(int j=0; j<columns; j++){
                if(!visited[i][j] && grid[i][j] == '1'){
                    dfs(i,j,grid,visited,rows,columns);
                    ans++;
                }
            }
        }
        return ans;
    }

};

int main(){
    Solution sol;
    vector<string> grid = {"1110","0010","0000","0001"};
    cout<<sol.numIslands(grid)<<endl;
}
