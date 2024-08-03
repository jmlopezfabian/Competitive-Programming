#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int> frecuency;
        priority_queue<pair<int,int>> most_frecuent;

        for(int i=0; i<nums.size(); i++){
            frecuency[nums[i]]++;
        }

        //for(auto it: frecuency){
        //    cout<<it.first<<" "<<it.second<<endl;   
        //}

        for(auto it: frecuency){
            most_frecuent.push({it.second,it.first});
        }
        
        while(k > 0){
            pair<int,int> aux = most_frecuent.top();
            most_frecuent.pop();
            //cout<<aux.first<<" "<<aux.second<<endl;
            ans.push_back(aux.second);
            //cout<<aux.second<<endl;
            k--;
        }

    }
};

int main(){
    Solution sol;
    vector<int> nums = {3,1,1,2,2,1};
    sol.topKFrequent(nums,2);
}