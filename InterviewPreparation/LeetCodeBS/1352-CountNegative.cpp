#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int total_negatives = 0;
        for(auto it: grid){
            int index = lowerBound(it);
            total_negatives += it.size() - index;
            //cout<<index<<endl;
        }
        return total_negatives;
    }

    int lowerBound(vector<int>& nums){
        int l = 0, r = nums.size() - 1;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(nums[mid] >= 0)
                l = mid + 1;
            else
                r = mid - 1;
        }
        //cout<<"l: "<<l<<endl;
        return l;
    }
};

int main(int argc, char** argv){
    Solution sol;

    vector<vector<int>> grid = {
        {4,3,2,-1},
        {3,2,1,-1},
        {1,1,-1,-2},
        {-1,-1,-2,-3}
    };
    cout<<sol.countNegatives(grid);
}