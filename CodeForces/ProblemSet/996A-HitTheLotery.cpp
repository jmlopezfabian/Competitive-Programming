#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n; cin>>n;
    vector<int> bills = {100,20,10,5,1};
    int current = 0;
    int ans = 0;
    int it = 0;
    while(current < n){
        current += bills[it];
        if(current > n && it < bills.size()){
            current -= bills[it];
            it++;
            ans--;
        }
        ans++;
    }
    cout<<ans<<endl;
}

int main(){
    solution();
}