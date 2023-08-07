#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    /*
    0,1,0,3,12
    ^ ^
    1,0,0,3,12
      ^   ^
    1,3,0,0,12
        ^   ^
    */
        int l = 0, r = l + 1;
        while(l<nums.size()){
            if(r >= nums.size()){
                break;
            }
            else if(nums[l] == 0 && nums[r] != 0){
                swap(nums[l],nums[r]);
                    r++;
                    l++;
            }
            else if(nums[l] == 0 && nums[r] == 0){
                r++;
            }
            else{
                r++;
                l++;
            }
        }
    }
};

int main(){
    Solution sol;
    vector<int> arr = {0,1,0,3,12};
    sol.moveZeroes(arr);
}