#include <bits/stdc++.h>
using namespace std;
void solution(){
    long long a,b;
    cin>>a>>b;
    
    if(b==1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        cout<<a<<" "<<a*b<<" "<<a*(1+b)<<endl;
    }

}
int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
}