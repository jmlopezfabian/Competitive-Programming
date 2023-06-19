#include <bits/stdc++.h>
 
using namespace std;
 
 
void solution(){
    //Estrategia Push DPate
    int n; cin>>n;
    int nums[n];
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    vector<int> dp(n,INT_MAX);
    dp[0] = 0;
    for(int i=0; i<n; i++){
        dp[i+1] = min(dp[i+1], dp[i] + abs(nums[i]-nums[i+1]));
        if(i+2 < n){
            dp[i+2] = min(dp[i+2], dp[i] + abs(nums[i]-nums[i+2]));
        }
    }
    //for(int i=0; i<n;i++){
    //    cout<<dp[i]<<endl;
    //}
 
    cout<<dp[n-1]<<endl;
}
 
int main(){
    solution();
}