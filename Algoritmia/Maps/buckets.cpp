#include <bits/stdc++.h>

using namespace std;

int main(){
    //int n; cin>>n;
    //map<int,int> bucket;

    //int currentNumber;
    //for(int i=0; i<n; i++){
    //    cin>>currentNumber;
    //    bucket[currentNumber]++;
    //}
//
    //for(auto it = bucket.begin(); it != bucket.end(); it++){
    //    cout<<it-> first<< "->>" << it->second<<endl;
    //}

    string s = "egg";
    string t = "add";

    map<char,int> bucket1;
    map<char,int> bucket2;

    char currentchar;
    for(int i=0; i<s.length(); i++){
        bucket1[s[i]] ++;
    }

    for(int i=0; i<t.length(); i++){
        bucket2[s[i]] ++;
    }

    for(auto it = bucket1.begin(); it != bucket1.end(); it++){
        cout<<it-> first<< "->>" << it->second<<endl;
    }
}