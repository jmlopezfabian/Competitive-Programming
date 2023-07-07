#include <bits/stdc++.h>

using namespace std;

long long binpowMod(long long a, long long b, long long mod) {
    a %= mod;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

void solution(){
    long long x,y,n; cin>>x>>y>>n;
    cout<<binpowMod(x,y,n)<<endl;;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
    
}