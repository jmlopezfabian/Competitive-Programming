//https://codeforces.com/problemset/problem/1719/A

#include <bits/stdc++.h>

using namespace std;

void solution(){
    long long n,m;
    cin>>n>>m;

    if((n+m)%2 == 0){
        cout<<"Tonya"<<endl;
    }else{
        cout<<"Burenka"<<endl;
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
}