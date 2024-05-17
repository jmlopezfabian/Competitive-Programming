#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll max_long(ll a, ll b){
    if (a >= b)
        return a;
    else
        return b;
}

int main(){
    ll cum_sum = 0;
    int n; cin>>n;
    vector<pair<ll, ll>> gigantes;
    for(int i=0; i<n; i++){
        pair<ll, ll> aux;
        cin>>aux.first; cin>>aux.second;
        cum_sum += aux.first;
        gigantes.push_back(aux);
    }

    ll ans = -10e9;

    for(int i=0; i<n; i++){
        ans = max_long(cum_sum - gigantes[i].first + gigantes[i].second,ans);
    }

    cout<<ans<<endl;
}