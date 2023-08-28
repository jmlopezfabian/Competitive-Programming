#include <bits/stdc++.h>

using namespace std;

void solution(){
    long long n;cin>>n;
    if(n%2LL == 0LL){
        cout<<(n/2LL) - 1LL<<endl;
    }else{
        cout<<n/2LL<<endl;
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
}