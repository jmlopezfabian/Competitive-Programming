#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n,m; cin>>n>>m;
    int count = 0;

    string a,b;
    cin>>a>>b;

    int it = 0;
    for(int i=0; i<m; i++){
        if(a[it] == b[i]){
            count++;
            it++;
        }
    }
    cout<<count<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin>>t;
    while(t--){
        solution();
    }
}