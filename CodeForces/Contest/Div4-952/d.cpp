#include <bits/stdc++.h>

using namespace std;

int contar(string str){
    int ans = 0;
    for(auto it: str){
        if(it == '#')
            ans ++;
    }
    return ans;
}

void solution(){
    int n,m; cin>>n>>m;
    int num_sharps = INT_MIN;
    vector<string> grid;
    int x;
    for(int i=0; i<n; i++){
        string aux; cin>>aux;
        grid.push_back(aux);
        if(contar(aux) > num_sharps)
            x = i;
        num_sharps = max(num_sharps, contar(aux));
    }
    //cout<<num_sharps<<endl;
    //cout<<ceil((float) num_sharps / (float)2)<<endl;
    pair<int, int> ans;
    ans.first = x + 1;
    ans.second = 0;
    int act_count = 0;

    for(int i=0; i<m; i++){
        //cout<<act_count<<" ";
        if(grid[x][i] == '#' && act_count + 1 == ceil((float) num_sharps / (float)2)){
            ans.second = i + 1;
            break;
        }else if(grid[x][i] == '#')
            act_count ++;
    }

    //cout<<endl<<ans.first<<" "<<ans.second<<endl;
    cout<<ans.first<<" "<<ans.second<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        solution();
    }
}