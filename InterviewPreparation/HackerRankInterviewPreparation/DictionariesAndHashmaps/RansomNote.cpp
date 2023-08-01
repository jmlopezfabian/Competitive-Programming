#include <bits/stdc++.h>

using namespace std;

void checkMagazine(vector<string> magazine, vector<string> note) {
    map<string, int> bucket_magazine;
    map<string,int> bucket_note;
    for(int i=0;i<magazine.size(); i++){
        bucket_magazine[magazine[i]]++;
    }
    for(int i=0;i<note.size(); i++){
        bucket_note[note[i]]++;
    }
    
    auto it = bucket_note.begin();
    for(it; it!=bucket_note.end(); it++){
        if(bucket_magazine.find(it->first) == bucket_magazine.end()){
            cout<<"No"<<endl;
            return;
        }else{
            if(!(it->second <= bucket_magazine[it->first])){
                cout<<"No"<<endl;
                return;
            }            
        }
    }
    cout<<"Yes"<<endl;
}

int main(){
    vector<string> magazine = {"give","me","one","grand","today","night"};
    vector<string> note = {"give","one","grand","today"};
    checkMagazine(magazine,note);
}