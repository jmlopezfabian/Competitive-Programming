#include <bits/stdc++.h>

using namespace std;

void solution(){
    string a,b;

    cin>>a>>b;

    char aux = b[0];
    b[0] = a[0];
    a[0] = aux;
    cout<<a<<" "<<b<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--){
        solution();
    }
}