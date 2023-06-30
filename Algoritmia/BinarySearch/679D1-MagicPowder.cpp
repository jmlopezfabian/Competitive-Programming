#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n,k; cin>>n>>k;
    vector<int> need(n);
    vector<int> have(n);

    int max_nedd = INT_MIN;
    int pos;
    int i=0;
    for(i=0;i<n;i++){
        cin>>need[i];
        if(need[i] > max_nedd){
            max_nedd = need[i];
            pos = i;
        }
    }
    
    for(int i=0;i<n;i++){
        cin>>have[i];
    }

    
}

int main(){
    solution();
}