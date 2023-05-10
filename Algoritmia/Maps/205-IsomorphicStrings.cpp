#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mapValue;
        int n = s.length();

        for(int i=0; i<n; i++){
            if(mapValue.empty()){
                mapValue.insert({s[i],t[i]});
            }else{
                if(mapValue.find(s[i]) != mapValue.end()){
                    return false;
                }
            }
            mapValue.insert({s[i],t[i]});
        }
        return true;
    }
};

int main(){
    Solution solution;
    string s = "egg";
    string t = "add";
    cout<<solution.isIsomorphic(s,t);
}