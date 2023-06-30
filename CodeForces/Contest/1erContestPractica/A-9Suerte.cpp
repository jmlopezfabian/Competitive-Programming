#include <bits/stdc++.h>

using namespace std;

int main(){
    string N;
    cin>>N;
    int suma_digitos = 0;

    for(int i=0; i<N.length();i++){
        suma_digitos += (N[i] - '0');
    }
    if(suma_digitos % 9 == 0){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}