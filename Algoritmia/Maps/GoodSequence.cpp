#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;cin>>n;
    int aux;
    map<int,int> bucket;

    for(int i=0; i<n; i++){
        cin>>aux;
        bucket[aux]++;
    }

    int ans = 0;
    for(auto it = bucket.begin(); it != bucket.end(); it++){
        if(it->second > it->first){
            ans += it->second - it->first;
        }else if(it->second < it->first){
            ans += it->second;
        }
    }
    cout<<ans<<endl;
}