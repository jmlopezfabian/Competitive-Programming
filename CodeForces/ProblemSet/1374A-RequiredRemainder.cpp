#include <bits/stdc++.h>

using namespace std;

void solution(){
    int x,y,n; cin>>x>>y>>n;

    int c = (n - y) / x;
    cout<<(x * c) + y<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}