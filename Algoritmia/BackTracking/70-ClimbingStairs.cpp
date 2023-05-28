class Solution {
public:
    int solution(int current, int n,vector<int> &dp){
        if(current == n)
            return 1;
        if(current > n)
            return 0;
        if(dp[current] != -1){ //Ya lo calculamos
            return dp[current];
        }
        return dp[current] = solution(current+1,n,dp) + solution(current+2,n,dp);

    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1); //Llenamos todos los valores con -1
        int ans = solution(0,n,dp);
        return ans;
    }
};
