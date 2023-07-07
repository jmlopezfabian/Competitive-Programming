#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i] && (long long)i * i <= n) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }

    //cout<<is_prime.size()<<endl;
    //for(int i=0; i<is_prime.size(); i++){
    //    cout<<i<<" "<<is_prime[i]<<endl;
    //}
    
    for(int i=4; i<=n;i++){
        if(is_prime[i] == 0 && is_prime[n-i] == 0){
            cout<<i<<" "<<(n-i)<<endl;
            break;
        }
    }
}
