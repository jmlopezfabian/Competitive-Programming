#include <bits/stdc++.h>

using namespace std;

bool solution(int n, int m){
    if(n == m){
        return true;
    }
    else if(n % 3 != 0){
        return false;
    }
    else{
        return (solution(n/3,m)) || (solution(2*(n/3),m));
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        if(solution(n,m) == true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}