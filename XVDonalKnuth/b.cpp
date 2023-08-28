#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int columns = (2 * n - 1) + 2;
    int rows = n + 2;

    int mid = n;
    char mat[rows][columns];

    //Primera fila
    for(int i=1; i+1<columns; i++){
        if(i == mid){
           mat[1][i] = '*';
        }else{
            mat[1][i] = '.';
        }
    }

    for(int i=2; i+1 < rows; i++){
        for(int j=1; j+1<columns; j++){
            pair<int,int> cord1 = {i-1,j-1};
            pair<int,int> cord2 = {i-1,j+1};
            if((mat[cord1.first][cord1.second] == '*' && mat[cord2.first][cord2.second] != '*') || (mat[cord1.first][cord1.second] != '*' && mat[cord2.first][cord2.second] == '*')){
                mat[i][j] = '*';
            }else{
                mat[i][j] = '.';
            }
        }
    }

    for(int i=1; i+1 < rows; i++){
        for(int j=1; j+1<columns; j++){
            cout<<mat[i][j];
        }
        cout<<"\n";
    }
}