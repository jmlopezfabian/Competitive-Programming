class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans (2);
        map<int,int> miMap; //Valor, indice
        for(int i=0; i<nums.size(); i++){
            int resto = target - nums[i];

            if(miMap.find(resto) != miMap.end()){
                ans[0] = i;
                ans[1] = miMap.find(resto)->second;
            }else{
                miMap.insert({nums[i],i});
            }
        }

        return ans;
    }
};
