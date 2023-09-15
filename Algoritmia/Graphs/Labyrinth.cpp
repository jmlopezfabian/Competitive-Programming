#include <bits/stdc++.h>

using namespace std;


int main(){
	int n,m; cin>>n>>m;

	vector<vector<char>> grid(n);
    map<pair<int,int>,bool> visited;
	vector<vector<int>> distance(n);

	char aux;
	pair<int,int> start;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>aux;
			grid[i].push_back(aux);
			distance[i].push_back(0);
			if(aux == 'A')
				start = {i,j};

		}
	}

	queue<pair<int,int>> q;
	q.push(start);
	visited[{start.first,start.second}]=true;
	distance[start.first][start.second] = 0;
	while(!q.empty()){
		pair<int,int> current = q.front();
		int x=current.first;
        int y=current.second;
		cout<< grid[current.first][current.second]<<" ";
		q.pop();
		int dx[] = {-1,0,1,0};
		int dy[] = {-1,0,1,0};
		//Process node

		// For every adjacent vertex to the current vertex
		for(int i=0;i<4;i++){
            int newX=x+dx[i];
            int newY=y+dy[i];
            if((newX>=0&&newX<grid.size())
            &&(newY>=0&&newY<grid[0].size())
            &&!visited[{newX,newY}]
            &&grid[newX][newY]=='1')
            {
                q.push({newX,newY});
                visited[{newX,newY}]=true;
            }
        }
	}
}
	

