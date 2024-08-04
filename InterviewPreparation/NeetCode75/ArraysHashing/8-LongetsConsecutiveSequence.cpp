    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        set<int> uniqueOrderValues;
        for(auto it: nums){
            uniqueOrderValues.insert(it);
        }

        auto it = uniqueOrderValues.begin();
        auto it2 = uniqueOrderValues.begin();
        it2++;
        int current = 0;
        int ans = 0;



        while(it2 != uniqueOrderValues.end()){
            if((*it) + 1 == *it2){
                current += 1;
                ans = max(ans, current);
            }else{
                current = 0;
            }
            it++;
            it2++;
        }
        return ans + 1;
    }
