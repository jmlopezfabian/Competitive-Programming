#include <bits/stdc++.h>

using namespace std;

char convertLowerCase(char chr){
    if(chr >= 65 && chr<=90){
        return chr + 32;
    }
    return chr;
}

int main(){
    string str; cin>>str;
    vector<char> ans;
    char aux;
    for(int i=0;i<str.length();i++){
        aux = convertLowerCase(str[i]);
        if(!(aux == 'a' || aux == 'e'||aux == 'i'||aux == 'o'||aux == 'u'||aux == 'y')){
            ans.push_back('.');
            ans.push_back(aux);
        }
    }
    for(int i=0;i<ans.size(); i++){
        cout<<ans[i];
    }
}