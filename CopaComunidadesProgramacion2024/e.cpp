#include <bits/stdc++.h>

using namespace std;

void solution(int n){
    vector<int> nums(n);
    vector<int> ans(n);

    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    ans[0] = nums[0];
    for(int i=1; i<n; i++){
        ans[i] = nums[i-1] ^ nums[i];
    }

    for(auto it: ans){
        cout<<it<<" ";
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int entrada;
    while (true) {
        cin >> entrada;
        if (entrada == 0) {
            break;
        }
        solution(entrada);
    }

    return 0;
}