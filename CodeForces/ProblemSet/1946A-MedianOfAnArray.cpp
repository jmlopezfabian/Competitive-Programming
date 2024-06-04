#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solution(){
    int n; cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    sort(nums.begin(), nums.end());

    int pos_med = ceil((double) n / (double) 2) - 1;
    //cout<<pos_med<<endl;
    int count = 1;
    int num_med_act = nums[pos_med];


    while(pos_med < n){
        if(nums[pos_med + 1] == num_med_act){
            count ++;
        }
        pos_med++;
    }

    cout<<count<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
}