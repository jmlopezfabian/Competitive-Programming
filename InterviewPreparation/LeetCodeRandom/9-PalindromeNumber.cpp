class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        vector<int> cifras;
        while(x > 0){
            cifras.push_back(x % 10);
            x = x / 10;
        }

        int l = 0, r = cifras.size() - 1;
        while(l < r){
            if(cifras[l] != cifras[r]){
                return false;
            }
                l += 1;
                r -= 1;
            
        }
        return true;
    }
};
