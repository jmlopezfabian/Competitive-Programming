#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solution(){
    ll x,y,k;
    cin>>x>>y>>k;

    ll px = (x + k - 1) / k;
    ll py =(y + k - 1) / k;

    int ans;
    //cout<<px<<" "<<py;
    if(py < px){
        ans = (px * 2) - 1;
    }else{
        ans = py * 2;
    }
    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}