#include <bits/stdc++.h>

using namespace std;

void solution(){
    int a,b,c; cin>>a>>b>>c;
    if(a + b == c){
        cout<<"+"<<endl;
    }else{
        cout<<"-"<<endl;
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
}