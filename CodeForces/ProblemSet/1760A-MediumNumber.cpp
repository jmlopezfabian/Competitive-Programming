#include <bits/stdc++.h>

using namespace std;

void solution(){
    vector<int> nums(3);
    for(int i=0; i<3; i++){
        cin>>nums[i];
    }
    sort(nums.begin(), nums.end());

    cout<<nums[1]<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}