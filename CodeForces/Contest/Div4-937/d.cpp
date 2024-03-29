#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
bool is_binary(ll n){
    while(n > 0){
        if(n % 10 != 0 && n % 10 != 1){
            //cout<<n<<endl;
            return false;
        }
        n /= 10;
    }
    return true;
}


set<ll> factos(ll n){
    set<ll> f;
    for (ll x =2 ; x*x <= n; x++){
        while(n%x == 0){
            f.insert(x);
            n /= x;
        }
    }
    if( n > 1) f.insert(n);
    return f;
}

void solution(){
    ll n;cin>>n;
    if(is_binary(n)){
        cout<<"YES"<<endl;
        return;
    }
    set<ll> f = factos(n);
    for (auto it: f){
        if(!is_binary(it)){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}
