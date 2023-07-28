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

int getWays(int n, vector<long> &c, int current_money,vector<long> &memo, int index){
    if(current_money > n || index >= c.size()){
        return 0;
    }
    else if(current_money == n){
        return 1;
    }
    if(memo[index] != -1){
        return memo[index];
    }
    memo[index] = getWays(n,c,current_money, memo,index+1) + getWays(n,c,current_money + c[index], memo, index);
    return memo[index];
}