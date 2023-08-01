#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector<int> ar){
    map<int,int> bucket;
    for(int i=0; i<n; i++){
        bucket[ar[i]] ++;
    }
    
    int count = 0;
    for(auto it = bucket.begin(); it != bucket.end(); it++){
        count = count + it->second / 2;
    }
    return count;
}

int main(){
    vector<int> ar = {10, 20, 20, 10, 10, 30, 50, 10, 20};
    cout<<sockMerchant(9,ar);
}