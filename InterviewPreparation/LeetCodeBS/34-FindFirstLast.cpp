#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0)
            return {-1,-1};
        
        int lim_if = limiteInf(nums, target);
        int lim_sup = limiteSup(nums, target);
    
        if((lim_if >= 0 && lim_if < nums.size())  && (lim_sup >= 0 && lim_sup < nums.size())){
            if(nums[lim_if] == target && nums[lim_sup] == target){
                return {lim_if, lim_sup};
            }
        } 
        return {-1,-1};
    }

    int limiteInf(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1, ans = -1, mid;
        
        while(l <= r){
            mid = l + (r - l) / 2;

            if(nums[mid] >= target){
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        return ans;
    }
    
    int limiteSup(vector<int>& nums, int target){
        int l = 0, r = nums.size() - 1, ans = -1, mid;
        
        while(l <= r){
            mid = l + (r - l) / 2;
            
            if(nums[mid] <= target){
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        return ans;
    }
};



int main(){
    Solution sol;
    vector<int> nums = {};
    int target = 0;
    cout<<sol.searchRange(nums, target)[0];
    cout<<sol.searchRange(nums, target)[1];
}
