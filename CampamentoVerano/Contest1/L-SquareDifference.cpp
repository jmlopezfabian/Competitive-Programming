#include <bits/stdc++.h>
 
using namespace std;
 
bool isPrime(long long num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (long long i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}
 
 
 
void solution(){
    long long a,b; cin>>a>>b;
    if(a-b != 1){
        cout<<"NO"<<endl;
    }else{
        long long res = (a+b);
        if(isPrime(res)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    
 
}
 
int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
}
