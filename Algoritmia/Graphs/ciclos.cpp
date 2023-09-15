#include <bits/stdc++.h> 

using namespace std;


//Dirigido
int hasCycle(vector<vector<int>> &graph, vector<int> &colors, int current, vector<int> visited){
    if(colors[current] = 1) return 1;
    if(colors[current] = 2) return 0;
    colors[current] = 1;
    int ans = 0;
    for(auto next: graph[current]){
        if(!visited[next])
            ans = ans | hasCycle(graph,colors, current)
    }
    colors[current] = 2;
    return ans;
}

//No diirigod
int hasCycle(vector<vector<int>> &graph, vector<int> &colors, int current, vector<int> visited){
    if(colors[current] = 1) return 1;
    //if(colors[current] = 2) return 0;
    colors[current] = 1;
    int ans = 0;
    for(auto next: graph[current]){
        //if(!visited[next])
            ans = ans | hasCycle(graph,colors, current)
    }
    //colors[current] = 2;
    return ans;
}

int main(){

}