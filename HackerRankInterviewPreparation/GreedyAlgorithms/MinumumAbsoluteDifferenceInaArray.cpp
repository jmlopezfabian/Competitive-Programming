#include <bits/stdc++.h>

using namespace std;

int minimumAbsoluteDifference(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int ans = INT_MAX;

    for(int i=0; i+1<n; i++){
        ans = min(ans, abs(arr[i] - arr[i+1]));
    }
    return ans;
}

int main(){
    vector<int> arr = {-59,-36, -13, 1, -53, -92, -2, -96, -54, 75};
    cout<<minimumAbsoluteDifference(arr)<<endl;
}