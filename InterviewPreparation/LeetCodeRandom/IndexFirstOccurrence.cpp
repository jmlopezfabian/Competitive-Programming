//Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int Hit = 0, Nit = 0;
        int ans = -1;
        /*
        haystack = "ssssabutsad"
                        ^
    
        needle = "sad"
                  ^

        ans -> 4
        Hit -> 6
        Nit -> 0

        leetcode
         ^
        leeto
        ^
        */
       if(haystack.length() < needle.length()){
        return ans;
       }
        while(Nit < needle.length() && Hit < haystack.length()){
            if(haystack[Hit] == needle[Nit]){
                if(Nit == 0){
                    ans = Hit;
                }
                Hit++;
                Nit++;
            }
            else if(haystack[Hit] != needle[Nit]){
                if(Nit == 0){
                    Hit++;
                }
                else{
                    Hit = ans + 1;
                    ans = -1;
                    Nit = 0;
                }
                
            }
        }
        if(Nit == needle.length()){
            return ans;
        }else{
            return -1;
        }
    }
};

int main(){
    Solution sol;
    cout<<sol.strStr("mississippi","issipi")<<endl;
}