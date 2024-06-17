#include <bits/stdc++.h>

using namespace std;

void solution(){
    vector<string> board;
    int n; cin>>n;
    for(int i=0; i<n;i++){
        string aux; cin>>aux;
        board.push_back(aux);
    }


    int ans = 0;
    for(int i=0; i<n; i++){ 
        for(int j=1; j<n; j++){
            if(board[i][j] == 'N' && board[i][j-1] == 'N'){
                //cout<<board[i][j]<<board[i][j-1]<<endl;
                ans ++;
                j+=1;
            }
        }
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}