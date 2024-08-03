class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> miSet;
        for(auto it: nums){
            miSet.insert(it);
        }
        if(miSet.size() != nums.size()){
            return true;
        }
        return false;
    }
};
