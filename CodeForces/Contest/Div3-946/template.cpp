#include <bits/stdc++.h>

using namespace std;

void solution(){
    int x, y; cin>>x>>y;

    int total;
    if(y == 0){
        total = (x + 10) / 11;
    }else if (y%2 == 0){
        int cajas2 = y / 2;
        total = abs(cajas2 - (((x+6) / 7)) - cajas2);
    }else{
        int cajas2 = (y-1) / 2;
        total = ((x+10) / 11) + abs(cajas2 - (((x+6) / 7)) - cajas2);
    }
    cout<<total<<endl;
}   

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--){
        solution();
    }
}