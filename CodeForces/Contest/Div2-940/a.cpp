#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n; cin>>n;
    map<int, int> bucket;
    for(int i=0; i<n; i++){
        int aux; cin>>aux;
        bucket[aux]++;
    }

    int ans = 0;
    for(auto it: bucket){
        if(it.second >= 3)
            ans += it.second / 3;
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        solution();
    }
}