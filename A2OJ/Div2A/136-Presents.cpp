#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    vector<int> ans(n);
    for(int i=0; i<n; i++){
        int aux;
        cin>>aux;
        ans[aux - 1] = i + 1;
    }

    for(auto it: ans){
        cout<<it<<" ";
    }
    cout<<endl;
}