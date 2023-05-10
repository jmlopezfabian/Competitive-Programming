//link: https://leetcode.com/problems/check-if-the-sentence-is-pangram/
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.length();
        map <char,int> bucket;

        for(int i = 0; i<n; i++){
            bucket[sentence[i]]++;
        }
        if(bucket.size() < 26){
            return false;
        }
        return true;
    }
};

int main(){
    string sentence = "leetcode";
    Solution solution;
    cout<<solution.checkIfPangram(sentence);
}