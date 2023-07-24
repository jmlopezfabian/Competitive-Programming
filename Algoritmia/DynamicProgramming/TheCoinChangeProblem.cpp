// https://www.hackerrank.com/challenges/coin-change/problem
#include <bits/stdc++.h>

using namespace std;

int getWays(int n, const vector<long> c) {
    vector<long> dp(n + 1, 0);
    dp[0] = 1;

    for(int i=0; i<c.size();i++){
        for(int j=c[i]; j<=n; j++){
            dp[j] = dp[j] + dp[j-c[i]];
        }
    }
    return dp[n];
}

int main() {
    int n = 4;
    vector<long> c = {1,2,3};
    cout<<getWays(4,c)<<endl;
    return 0;
}