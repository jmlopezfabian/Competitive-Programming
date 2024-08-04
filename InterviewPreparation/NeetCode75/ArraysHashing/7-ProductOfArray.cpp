#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        long int total_prod = 1;
        for(auto it: nums){
            total_prod *= it;
        }
        for(int i=0; i<nums.size(); i++){
            ans[i] = total_prod / nums[i];
        }
	for(auto it: ans){
		cout<<it<<" ";
	}
        return ans;
    }
};

int main(){
	Solution sol;
	vector<int> nums = {1,2,3,4};
	sol.productExceptSelf(nums);
}
