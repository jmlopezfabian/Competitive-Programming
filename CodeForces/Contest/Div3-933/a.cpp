#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n,m,k; cin>>n>>m>>k;

    vector<int> ns(n);
    vector<int> ms(m);

    for(int i=0;i<n;i++){
        cin>>ns[i];
    }
    for(int i=0;i<m;i++){
        cin>>ms[i];
    }
    
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(ns[i] + ms[j] <= k){
                count += 1;
            }
        }
    }
    cout<<count<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}
