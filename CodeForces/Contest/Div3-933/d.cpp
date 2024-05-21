#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n,m,x; cin>>n>>m>>x;

    queue<int> actuales;
    actuales.push(x);

    while(m--){
        int actual  = actuales.front();
        actuales.pop();

        int pasos; cin>>pasos;
        char instruccion;
        cin>>instruccion;
        
    }

    cout<<actuales.size()<<endl;
    while(!actuales.empty()){
        cout<<actuales.front()<<" ";
        actuales.pop();
    }
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}
