class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> frecuencyS;
        map<char,int> frecuencyT;

        for(auto character: s){
            frecuencyS[character]++;
        }
        for(auto character: t){
            frecuencyT[character]++;
        }

        if(frecuencyS.size() != frecuencyT.size()){
            return false;
        }else{
            for(auto it: frecuencyS){
                if(frecuencyT[it.first] != it.second){
                    return false;
                }
            }
        }

        return true;
    }
};
