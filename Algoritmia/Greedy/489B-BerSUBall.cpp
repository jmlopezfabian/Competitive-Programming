#include <bits/stdc++.h>
 
using namespace std;
 
void solution(){
    int n; cin>>n;
    vector<int> boys(n);
    for(int i=0;i<n;i++){
        cin>>boys[i];
    }
    int m; cin>>m;
    vector<int> girls(m);
    for(int i=0;i<m;i++){
        cin>>girls[i];
    }
 
    int l = 0, r = 0;
    int ans = 0;
    int res;
 
    sort(boys.begin(),boys.end());
    sort(girls.begin(),girls.end());
    
    while(l<n && r<m){
        res = abs(boys[l]-girls[r]);
        if(res <= 1){
            ans ++;
            r++;
            l++;
        }
        else if(boys[l] > girls[r]){
            r++;
        }
        else{
            l++;
        }
    }
 
    cout<<ans;
}
 
int main(){
    solution();
}
