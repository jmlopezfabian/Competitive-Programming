#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n; cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int cost = 0;
    sort(nums.begin(), nums.end());
    
    for(int i=0;i<n/2; i++){
        cost += (nums[n-i-1] - nums[i]);
    }
    cout<<cost<<endl;
}

int main(){
    int t; cin >>t;
    while(t--){
        solution();
    }
}