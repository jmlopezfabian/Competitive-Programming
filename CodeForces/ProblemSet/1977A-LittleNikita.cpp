#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n,m; cin>>n>>m;

    

    int resta = n - m;

    if(resta % 2 == 0 && n >= m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}