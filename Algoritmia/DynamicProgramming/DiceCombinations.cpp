//https://cses.fi/problemset/task/1633
#include <bits/stdc++.h>
long long mod = 1000000007;

using namespace std;

long long totalWays(int n, long long current, vector<long long> &memo){
    if(current > n){
        return 0ll;
    }
    if(current == n){
        return 1ll;
    }
    if(memo[current] != -1){
        return memo[current];
    }
    memo[current] = (totalWays(n,current+1,memo) + totalWays(n,current+2,memo) + totalWays(n,current+3,memo)+ totalWays(n,current+4,memo)+ totalWays(n,current+5,memo)+ totalWays(n,current+6,memo)) % mod;
    return memo[current];
}

int main(){
    int n;cin>>n;
    vector<long long> memo(n+1,-1);
    cout<<totalWays(n,0, memo)<<endl;
}