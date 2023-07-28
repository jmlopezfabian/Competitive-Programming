// https://www.hackerrank.com/challenges/coin-change/problem
#include <bits/stdc++.h>

using namespace std;

int getWays(int n, vector<long> &c, long current, int index, vector<long> dp){
    if(current > n || index >= c.size()){
        return 0;
    }
    else if(current == n){
        return 1;
    }
    if(dp[index] != -1){ 
        return dp[index];
    }
    dp[index] = getWays(n,c,current + c[index], index,dp) + getWays(n,c,current, index+1,dp);
    cout<<"Index: "<<index<<endl;
    for(int i=0;i<dp.size();i++){
        cout<<dp[i]<<" ";
    }
    cout<<"\n";
    return dp[index];
}

int main() {
    int n = 4;
    vector<long> c = {1,2,3};
    vector<long> current;
    vector<long> dp(n-1,-1);
    
    cout<<getWays(n,c,0,0,dp)<<endl;



    return 0;
}