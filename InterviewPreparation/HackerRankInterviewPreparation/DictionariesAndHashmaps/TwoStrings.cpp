#include <bits/stdc++.h>

using namespace std;

string twoStrings(string s1, string s2) {
    map<char,int> bucket_s1;
    map<char,int> bucket_s2;
    for(int i=0; i<s1.size(); i++){
        bucket_s1[s1[i]]++;
    }
    for(int i=0; i<s2.size(); i++){
        bucket_s2[s2[i]]++;
    }
    auto it = bucket_s1.begin();
    for(it; it != bucket_s1.end(); it++){
        if(bucket_s2.find(it->first) != bucket_s2.end()){
            return "YES";
        }
    }
    return "NO";
}

int main(){
    cout<<twoStrings("and","art");
}