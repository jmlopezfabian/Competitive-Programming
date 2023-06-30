#include <bits/stdc++.h>

using namespace std;

void solution(){
    long long n;cin>>n;
    long long suma = 0;
    while(n!=0){
        suma += n;
        n /= 2;
    }
    cout<<suma<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}