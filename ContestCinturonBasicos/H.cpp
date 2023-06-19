#include<bits/stdc++.h>
 
using namespace std;
int msb(int n){
    int ans = 1;
    while (n) {
        ans *= 2;
        n /= 2;
    }
      ans/=2;
    return ans;
}
 
void solution(){
    int n; cin>>n;
    cout<<msb(n)-1<<endl;
}
 
int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}