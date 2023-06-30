#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1000000007;
void solve(){
    long long n,k,res1,res;
    cin>>n;
    cin>>k;
    res1 = (k + 1LL) * (( (n + 1LL) * (n + 2LL) ) / 2LL);
    res = res1%MOD;
    cout<<res<<endl;
}

int main()
{
    long long i=0,t;
    cin>>t;
    while(t--){
        solve();
    }
}