#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int contador = 0;
        int j=0;
        for(int i=0; i<s.size(); i++){
            while(j<t.size()){
                if(s[i] == t[j]){
                    contador ++;
                    j++;
                    break;
                }
                j++;
            }
        }
        if(contador == s.size()){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    Solution sol;
    string s = "aaaaaa", t = "bbaaaa";
    cout<<sol.isSubsequence(s,t);
}