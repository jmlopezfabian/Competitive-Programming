#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
            return binarySearch(0, nums.size(),nums, target);
    }

    int binarySearch(int l, int r, vector<int>& nums, int target){
        if(l > r){
            if(target < nums[r]){
                return l - 1;
            }else{
                return l + 1;
            }
        }

        int mid = l + ((r-l) / 2);

        if(nums[mid] == target){
            return mid;
        }

        if(nums[mid] < target){
            return binarySearch(mid+1, r, nums, target);
        }else{
            return binarySearch(l, mid-1, nums, target);
        }
    }
};

int main(int argc, char** argv){
    Solution sol;
    vector<int> nums = {1,3};
    int target = 2;

    cout<<sol.searchInsert(nums, target);
}