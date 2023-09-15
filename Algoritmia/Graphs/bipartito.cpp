#include <bits/stdc++.h>

using namespace std;

int isBipartiteBSF(int start, vector<vector<int>> &graph, vector<int> &color){
    int n = graph.size();
    queue<pair<int,int>> q;
    q.push({start,1});
    while(!q.empty()){
        pair<int,int> current = q.front(); q.pop();
        for(int next: graph[current.first]){
            if(color[next] == current.second){
                return false;
            }
            if(color[next] == 0){
                color[next] = current.second == 1 ? 2 : 1;
                q.push({next,color[next ]});
            }
        }
    }
    return 1;
}

int isBipartiteDFS(int current, vector<vector<int>> &graph, vector<int> color){
    int is = 1;
    for(int next: graph[current]){
        if(color[next] == 0){
            clor [next] = color[current] == 1 ? 2 : 1;
            is = is & isBipartiteDFS(next, graph, color);
        }else if(color[next] == color[current]) return 0;
    }
    return is; 
}

int main()