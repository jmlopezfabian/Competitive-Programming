class Solution {
public:
    
    void solve(string digits, int current, vector<string> &res, string &currentRes, unordered_map<int,string> &keys){
        

        if(current == digits.size()){
            res.push_back(currentRes);
            return;
        }else{
            for(char c: keys[digits[current]-'0']){
                currentRes += c;
                solve(digits, current+1, res, currentRes, keys);
                currentRes.pop_back();
            }
        }
        
    }

    vector<string> letterCombinations(string digits) {
        unordered_map<int,string> keys = {
            {2,"abc"},
            {3,"def"},
            {4,"ghi"},
            {5,"jkl"},
            {6,"mno"},
            {7,"pqrs"},
            {8,"tuv"},
            {9,"wxyz"}
        };
        
        vector<string> res;
        if(digits.size() == 0)
            return res;
        string currentRes;
        solve(digits, 0,res,currentRes,keys);
        return res;
    }
};
