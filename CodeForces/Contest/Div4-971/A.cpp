#include <bits/stdc++.h>
using namespace std;

void solution(){
    int a,b; cin>>a>>b;
    int ans = INT_MAX;
    for(int i=a; i<=b; i++){
        int actual = (i - a) + (b - i);
        ans = min(ans, actual);
    }
    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}