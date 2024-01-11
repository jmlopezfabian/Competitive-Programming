#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n; cin>>n;
    int suma = 0;
    for(int i=0; i<n; i++){
        int aux;
        cin>>aux;
        suma += aux;
    }

    int raiz = sqrt(suma);
    if(raiz * raiz == suma){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
}