#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void separateStringBySpaces(string sentence, vector<string> &aux){
        string str_aux;
        for(int i=0; i<=sentence.length(); i++){

            if(sentence[i] != ' ' && sentence[i] != '\0'){
                str_aux += sentence[i];
            }
            else{
                aux.push_back(str_aux);
                str_aux.clear();
            }
        }
    }
    int isPrefixOfWord(string sentence, string searchWord) {
        /*
        sentece = "Hello good nigth"
        searchWord = "go"

        ans -> 2
        */
        vector<string> aux;
        separateStringBySpaces(sentence, aux);
        int i=0;
        int it=0;
        for(i; i<aux.size(); i++){
            for(int j=0; j<aux[i].length(); j++){
                if(aux[i].length() < searchWord.length()){
                    break;
                }
                if(aux[i][j] != searchWord[it]){
                    it = 0;
                    break;
                }
                else{
                    it++;
                }
                if(it == searchWord.length()){
                    return i + 1;
                }
            }
        }
        return -1;
    }
};

int main(){
    Solution sol;
    string sentence = "b bu bur burg burger";
    string searchWord = "burg";

    cout<<sol.isPrefixOfWord(sentence, searchWord)<<endl;

}