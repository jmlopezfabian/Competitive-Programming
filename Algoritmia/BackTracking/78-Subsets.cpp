#include <bits/stdc++.h>
using namespace std;


//void solve(int n, vector<int> &nums, string &currentAns, vector<string> &ans, int& current){
//    if(currentAns.length() <= n){
//        ans.push_back(currentAns);
//    }
//    if(currentAns.length() > n){
//        return;
//    }
//    else{
//        for(int i=current; i<n;i++){
//            currentAns += nums[i] + '0';
//            current += 1;
//            solve(n,nums,currentAns,ans, current);
//            currentAns.pop_back();
//        }
//    }
//}
//Hay que hacer un current que vaya recorriendo hacia delante

//int main(){
//    vector<int> nums = {1,2,3};
//    vector<string> ans;
//    int n = nums.size();
//    string currentAns = "";
//    int current = 0;
//    solve(n,nums,currentAns,ans,current);
//
//    for(string str: ans){
//        cout<<str<<endl;
//    }
//}

void solve(int n, vector<int> &nums, vector<int> &currentAns, vector<vector<int>> &ans, int& current){
    if(currentAns.size() <= n){
        ans.push_back(currentAns);
    }
    if(currentAns.size() > n){
        return;
    }
    else{
        for(int i=current; i<n; i++){
            currentAns.push_back(nums[i]);
            current += 1;
            solve(n,nums,currentAns, ans, current);
            currentAns.pop_back();
        }
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    vector<vector<int>> ans;
    int n = nums.size();
    vector<int> currentAns;
    int current = 0;
    solve(n,nums,currentAns,ans,current);

    for(auto vector: ans){
        cout<<endl;
        for(auto integer: vector){
            cout<<integer;
        }
    }
}