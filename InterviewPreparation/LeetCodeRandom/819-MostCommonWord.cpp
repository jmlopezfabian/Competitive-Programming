#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<string> splitt(string str){
        vector<string> splitted;
        string current;
        for(int i=0; i<=str.length(); i++){
            if(str[i] != ' ' && str[i] != '\0'){
                if(str[i] != '!' && str[i] != '?' && str[i] != ','&&str[i] != ';' && str[i] != '.')
                current += tolower(str[i]);
            }else if(str[i] == ' ' || str[i] == '\0'){
                splitted.push_back(current);
                current.clear();
            }
        }
        return splitted;
    }
    string mostCommonWord(string paragraph, vector<string>& banned) {
        vector<string> splitted;
        splitted  = splitt (paragraph);
        map<string,int> bucket;
        set<string> set;
        for(int i=0;i<banned.size();i++){
            set.insert(banned[i]);
        }
        if(set.empty()){
            return splitted[0];
        }
        for(int i=0; i<splitted.size();i++){
            if(set.find(splitted[i]) == set.end()){
                bucket[splitted[i]]++;
            }
        }
        auto it = bucket.begin();

        int max = INT_MIN;
        string ans;
        for(it; it!=bucket.end();it++){
            if(it->second > max){
                max= it->second;
                ans = it->first;
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;
    vector<string> banned = {};

    cout<<sol.mostCommonWord("a.",banned)<<endl;
}