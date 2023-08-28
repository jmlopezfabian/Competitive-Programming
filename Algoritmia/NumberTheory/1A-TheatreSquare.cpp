#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    long long total_altura = 1 + ((n-1) / a);
    //cout<<total_altura<<endl;
    long long ans = 0;
    while(m > 0){
        //cout<<m;
        m -= a;
        ans += total_altura;
        
    }
    cout<<ans<<endl;
}
