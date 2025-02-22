#include <bits/stdc++.h>

using namespace std;

void solution(){
    int x,y; cin>>x>>y;
    if(y - x == 1){
        cout<<"YES"<<endl;
    }else if(x % 9 == 0 && y == 1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}