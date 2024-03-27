#include<iostream>
 
using namespace std;
 
void solution(){
    int a,b,n; cin>>a>>b>>n;
    int fibo[3];
    fibo[0] = a;
    fibo[1] = b;
    fibo[2] = a ^ b;
    cout<<fibo[n%3]<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
}
