//https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> nums = {3,3};
    int target = 6;
    int resto;
    map<int,int> numbers; //valor,index
    array<int,2> ans;

    for(int i = 0; i<nums.size(); i++){
        resto = target - nums[i];
        if(numbers.find(resto) != numbers.end()){
            ans[0] = i;
            ans[1] = numbers.find(resto)->second;
        }
        numbers.insert({nums[i],i});
    }
    cout<<ans[1]<<" "<<ans[0];
}