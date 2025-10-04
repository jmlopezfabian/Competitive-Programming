//link: https://leetcode.com/problems/non-decreasing-subsequences/description/?envType=problem-list-v2&envId=backtracking
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void backtrack(vector<int>& nums, int start, vector<int>& current, vector<vector<int>>& result) {
        // If current subsequence has at least 2 elements, add it to result
        if (current.size() >= 2) {
            result.push_back(current);
        }
        
        // Use a set to avoid duplicate subsequences at the same level
        set<int> used;
        
        // Try each element from current position onwards
        for (int i = start; i < nums.size(); i++) {
            // Skip if we've already used this value at this level
            if (used.count(nums[i])) continue;
            
            // Skip if current element is less than the last element in current subsequence
            if (!current.empty() && nums[i] < current.back()) continue;
            
            used.insert(nums[i]); // Mark this value as used at this level
            current.push_back(nums[i]); // Add to current subsequence
            backtrack(nums, i + 1, current, result); // Recursively find subsequences
            current.pop_back(); // Backtrack
        }
    }

public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        backtrack(nums, 0, current, result);
        return result;
    }
};

int main(){
    Solution sol;
    
    // Test case 1
    vector<int> nums1 = {4,6,7,7};
    vector<vector<int>> ans1 = sol.findSubsequences(nums1);
    cout << "Test Case 1: [4,6,7,7]" << endl;
    cout << "Output:" << endl;
    for(int i = 0; i < ans1.size(); i++){
        cout << "[";
        for(int j = 0; j < ans1[i].size(); j++){
            cout << ans1[i][j];
            if(j < ans1[i].size() - 1) cout << ",";
        }
        cout << "]";
        if(i < ans1.size() - 1) cout << ", ";
    }
    cout << endl << endl;
    
    // Test case 2
    vector<int> nums2 = {4,4,3,2,1};
    vector<vector<int>> ans2 = sol.findSubsequences(nums2);
    cout << "Test Case 2: [4,4,3,2,1]" << endl;
    cout << "Output:" << endl;
    for(int i = 0; i < ans2.size(); i++){
        cout << "[";
        for(int j = 0; j < ans2[i].size(); j++){
            cout << ans2[i][j];
            if(j < ans2[i].size() - 1) cout << ",";
        }
        cout << "]";
        if(i < ans2.size() - 1) cout << ", ";
    }
    cout << endl;
    
    return 0;
}