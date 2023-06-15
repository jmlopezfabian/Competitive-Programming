#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n,x; cin>>n>>x;

    vector<int> algo(n);
    for(int i=0; i<n; i++){
        cin>>algo[i];
    }

    sort(algo.begin(), algo.end());

    int total_mins = 0;
    int sum =0;
    for(int i=0;i<n; i++){
        total_mins += algo[i];
        if(total_mins<=x){
            sum++;
        }
    }
    cout<<sum<<endl;
}

int main(){
    solution();
}