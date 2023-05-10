//link: https://leetcode.com/problems/sort-characters-by-frequency
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        map<char,int> bucket;
        priority_queue<pair<int,char>> maxHeap;
        vector<char> ans;
        int j=0;
        for(int i=0; i<s.length(); i++){
            bucket[s[i]]++;
        }
        
        for(auto it = bucket.begin(); it != bucket.end(); it++){
            maxHeap.push({it->second,it->first});
        }

        while(!maxHeap.empty()){
            j = 0;
            while(j < maxHeap.top().first){
                ans.push_back(maxHeap.top().second);
                j++;
            }
            maxHeap.pop();
        }

        string str(ans.begin(), ans.end());

        cout<<str;
        return str;
    }
};

int main(){
    string s = "Aabb";
    Solution solucion;
    solucion.frequencySort(s);
}