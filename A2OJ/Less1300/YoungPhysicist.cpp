#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    vector<vector<int>> nums(n);

    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            int aux; cin>>aux;
            nums[i].push_back(aux);
        }
    }
    vector<int> ans;
    for(int j = 0; j<3; j++){
        int suma = 0;
        for(int i=0; i<n; i++){
            suma += nums[i][j];
        }
        ans.push_back(suma);
    }

    for(auto it: ans){
        if(it != 0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

}