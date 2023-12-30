#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n;cin>>n;
    vector<int> nums(2*n);
    vector<pair<int,int>> coordinates(n);
    for(int i=0;i<2*n;i++){
        cin>>nums[i];
    }

    sort(nums.begin(), nums.end());
    int j = n;
    int res_x = 0;
    int res_y = 0;
    int k = 0;
    for(int i=n-1; i>=0; i--){
        coordinates[k] = {nums[i],nums[j]};
        //cout<<coordinates[k].first<<" "<<coordinates[k].second<<endl;
        //cout<<res_x<<" "<<res_y<<endl;
        if(i == n-1){
            res_x = nums[i];
            res_y = nums[j];
        }else{
            if(coordinates[k-1].first  != nums[i] && coordinates[k-1].second != nums[j]){
                res_x -= nums[i];
                res_y -= nums[j];
            }
            
        }
        j++;
        k++;
    }
    cout<<abs(res_x) + abs(res_y)<<endl;
    for(int i=0;i<n;i++){
        cout<<coordinates[i].first<<" "<<coordinates[i].second<<endl;
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
}