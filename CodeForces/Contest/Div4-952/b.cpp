#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n; cin>>n;
    int ans = INT_MIN;
    int x;
    
    for(int i=2; i<=n; i++){
        int sum = 0;
        for(int j=1; j*i<= n; j++){
            sum += j * i;
        }
        if(sum >= ans)
            x = i;
        ans  = max(ans, sum);
    }
    cout<<x<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--){
        solution();
    }
}