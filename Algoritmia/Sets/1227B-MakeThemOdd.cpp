#include <bits/stdc++.h>

using namespace std;

void solution(){
    set<int> a;

    int n; cin>>n;
    int aux;
    int ans = 0;
    for(int i=0; i<n; i++){
        cin>>aux;
        if(aux % 2== 0){
            a.insert(aux);
        }
    }

    auto it = a.rbegin();
    while(!a.empty()){
        ans++;
        aux = *a.rbegin();
        a.erase(aux);
        aux /= 2;
        if(aux%2 != 1){
            a.insert(aux);
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
}