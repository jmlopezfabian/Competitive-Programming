#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solution(){
    int n; 
    cin>>n;
    int acum = 0;
    int aux;

    for(int i=0; i<n; i++){
        cin>>aux;
        acum += abs(aux);
    }
    cout<<acum<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}