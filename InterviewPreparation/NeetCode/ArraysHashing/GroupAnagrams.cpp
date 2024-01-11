#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> anagrams;
        for(auto str: strs){
            string aux = str;
            sort(aux.begin(),aux.end());
            anagrams[aux].push_back(str);
        }
        vector<vector<string>> ans(anagrams.size());
        int i = 0;
        for(auto it: anagrams){
            //cout<<endl;
            //cout<<it.first;
            //cout<<endl;
            for(auto it2: it.second){
                //cout<<it2<<" ";
                ans[i].push_back(it2);
            }
            i++;
        }
        //for(int i=0; anagrams.size()-1; i++){
        //    for(auto it: ans[i]){
        //        cout<<it<<" ";
        //    }
        //    cout<<endl;
        //}
        return ans;
    }
};

int main(){
    Solution sol;
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    sol.groupAnagrams(strs);
}