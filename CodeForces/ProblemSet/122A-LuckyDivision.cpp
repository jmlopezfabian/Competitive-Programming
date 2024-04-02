#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

bool is_lucky(ll n){
    while(n > 0){
        if(n%10 != 4 && n%10 != 7){
            return false;
        }
        n /= 10;
    }
    return true;
}


int main(){
    ll n; cin>>n;

    if(is_lucky(n)){
        cout<<"YES"<<endl;
        return 0;
    }

    for(ll i=1; i<=n; i++){
        if(is_lucky(i) && n % i == 0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
