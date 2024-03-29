#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solution(){
    int a, b,c; cin>>a>>b>>c;
    if(a<b && b<c){
        cout<<"STAIR"<<endl;
    }else if(a < b && b > c){
        cout<<"PEAK"<<endl;
    }else
        cout<<"NONE"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}