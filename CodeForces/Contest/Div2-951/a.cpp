#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n; cin>>n;
    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int ans = INT_MAX;
    for(int i=0; i+1 < n; i++){
        ans = min(ans, max(nums[i]-1, nums[i+1]-1));
    }

    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}