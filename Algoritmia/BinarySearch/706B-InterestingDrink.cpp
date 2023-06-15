#include <bits/stdc++.h>
using namespace std;

int lower_bound(vector<int>& arr, int value, int left, int right) {
    if (left > right)
        return left;
    int mid = left + (right - left) / 2;
    if (arr[mid] <= value)
        return lower_bound(arr, value, mid + 1, right);
    else
        return lower_bound(arr, value, left, mid - 1);
}

void solution(){
    int n; cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n; i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    int q; cin>>q;
    int query;
    for(int i=0;i<q; i++){
        cin>>query;
        cout<<lower_bound(nums,query,0,nums.size()-1)<<endl;
    }
}
 
int main(){
    solution();
}