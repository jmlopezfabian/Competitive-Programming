#include <bits/stdc++.h>

using namespace std;

void solution(){
    long long k,n,w; cin>>k>>n>>w;

    long long suma = 0;
    for(long long i = 1; i<=w;i++){
        suma += i*k;
    }

    if(suma <= n){
        cout<<0<<endl;
    }else{
        cout<<suma-n<<endl;
    }

}

int main(){
    solution();
}