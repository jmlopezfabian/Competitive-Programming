#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

set<ll> binary_decimals;

bool is_binary(ll n){
    while(n > 0){
        if(n%10 > 1){
            return false;
        }
        n /= 10;
    }
    return true;
}

void solution(){
    ll n; cin>>n;
    //cout<<n<<endl;

    if(is_binary(n)){
        cout<<"YES"<<endl;
        return;
    }

    auto it = binary_decimals.begin();
    it++;

    while(n > 1 && it != binary_decimals.end()){
        
        if(n % *it == 0){
            n /= *it;
            //cout<<*it<<endl;
        }
        else{
            it ++;
        }

    }
    //cout<<n<<endl;
    if(it == binary_decimals.end() && n>1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}


int main(){
    ll lim = 100000;
    
    for(int i=1; i<lim; i++){
        if(is_binary(i)){
            binary_decimals.insert(i);
            //cout<<i<<endl;
        }
    }

    int t; cin>>t;

    while(t--){
        solution();
    }
}