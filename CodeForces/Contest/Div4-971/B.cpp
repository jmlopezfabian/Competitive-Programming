#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n; cin>>n;
    char map[n][4];
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            cin>>map[i][j];
        }
    }

    for(int i=n-1; i>=0; i--){
        for(int j=3; j>=0; j--){
            if(map[i][j] == '#')
                cout<<j + 1<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}