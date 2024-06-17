#include <bits/stdc++.h>

using namespace std;

void solution(){
        int numero = 0;
        cin>>numero;
        int suma = 0;
        while(numero > 0){
            suma += numero % 10;
            numero /= 10;
        }
        cout<<suma<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}