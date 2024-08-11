bool isNonAlphanumeric(char caracter){
    if(!(caracter < 48 || caracter > 57 && caracter < 65 || caracter > 90 && caracter < 97 || caracter > 122)){
    //if(!(caracter < 65 || caracter > 90 && caracter < 97 || caracter > 122)){
        return true;
    }
    else{
        return false;
    }
}

class Solution {
    public:
        bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while(i <= j && j != 0){
            if(isNonAlphanumeric(s[i]) == false){
                i++;
            }else if (isNonAlphanumeric(s[j]) == false){
                j--;
            }else{
                if(s[i] == s[j] || ((abs(int(s[i]) - int(s[j])) == 32) && ((s[i] > 64 && s[i] < 123) && (s[j] > 64 && s[j] < 123))) ){
                    i++;
                    j--;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};
