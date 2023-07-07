#include <bits/stdc++.h>

using namespace std;

void solve(int n, int current, vector<int> &subset){
    if(current == n){
        for(int i=0;i<subset.size(); i++){
            cout<<subset[i]<<" ";
        }
        cout<<"\n";
        return;
    }else{
        solve(n, current+1, subset);
        subset.push_back(current);
        solve(n, current+1, subset);
        subset.pop_back();
    }
}

void search(int n, int current, vector<int> &currentAns, vector<vector<int>> &ans){
    if(current == n){
        ans.push_back(currentAns);
        return;
    }
    search(n,current+1, currentAns,ans);
    currentAns.push_back(current);
    search(n,current+1, currentAns,ans);
    currentAns.pop_back();
}

int main(){
    int n = 4; 
    vector<int> currentAns;
    vector<vector<int>>ans;

    search(n,0,currentAns,ans);
    for(int i=0;i<ans.size();i++){
        cout<<"\n";
        for(auto it: ans[i]){
            cout<<it<<" ";
        }
    }
}