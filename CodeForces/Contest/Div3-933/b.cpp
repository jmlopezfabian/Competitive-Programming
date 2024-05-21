#include <bits/stdc++.h>

using namespace std;


void solution(){
    int n; cin>>n;
    vector<int> nums(n);

    int i=0;
    while(i<n){
        cin>>nums[i];
        i++;
    }

    for(int i=1; i+1<n; i++){
        //int k = floor(nums[i] / 2);
        int k = nums[i-1];
        if(k < 0){
            cout<<"NO"<<endl;
            return;
        }
          
        nums[i] = nums[i] - 2 * k;
        nums[i-1] -= k;
        nums[i+1] -= k;
        
        //cout<<endl<<k<<endl;
        //for(auto it: nums){
        //    cout<<it<<" ";
        //}
        
    }

    for(auto it: nums){
        if(it != 0){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}
