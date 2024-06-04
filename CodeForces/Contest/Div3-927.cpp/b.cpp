#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n; cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n;i++){
        cin>>nums[i];
    }
    
    int current = 0;
    for(int i=0; i<n;i++){
        current += nums[i] - current % nums[i];
    }

    cout<<current<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        solution();
    }
}