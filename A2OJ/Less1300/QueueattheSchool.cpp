#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t; cin>>n>>t;

    vector<char> childs(n);

    for(int i=0; i<n; i++){
        cin>>childs[i];
    }

    while(t--){
        for(int i=1; i<n; i++){
            if(childs[i-1] == 'B' && childs[i] == 'G'){
                swap(childs[i-1], childs[i]);
                i ++;
            }
        }
    }

    for(auto it: childs){
        cout<<it;
    }

    cout<<'\n';
}