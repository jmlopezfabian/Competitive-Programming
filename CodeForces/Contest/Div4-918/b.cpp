#include <bits/stdc++.h>

using namespace std;

void solution(){
    vector<vector<char>> grid(3, vector<char>(3));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> grid[i][j];
        }
    }

    pair<int,int> pos;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            //cout<<grid[i][j];
            if(grid[i][j] == '?'){
                pos.first = i; pos.second = j;
            }
        }
    }


    //cout<<pos.first<<" "<<pos.second;
    
    map<char,int> bucket;
    
    //MOvernos por todas las filas
    for(int i=0; i<3; i++){
        if(grid[i][pos.second] != '?'){
            bucket[grid[i][pos.second]]++;
        }
    }

    for(int i=0; i<3; i++){
        if(grid[pos.first][i] != '?'){
            bucket[grid[pos.first][i]]++;
        }
    }
    
    //for(auto it: bucket){
    //    cout<<it.first<<"-"<<it.second;
    //}

    if(bucket['A'] == 0){
        cout<<"A"<<endl;
    }else if(bucket['B'] == 0){
        cout<<"B"<<endl;
    }else{
        cout<<'C'<<endl;
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}