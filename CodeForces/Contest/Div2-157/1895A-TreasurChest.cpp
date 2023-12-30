#include <bits/stdc++.h>

using namespace std;

void solution(){
    int x,y,k; cin>>x>>y>>k;
    if(x > y){
        cout<<x<<endl;
    }else if((x < y) && (x + k < y)){
        int a = x + k;
        cout<<a + 2*(y - a)<<endl;
    }else{
        cout<<y<<endl;
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}