#include <bits/stdc++.h>

using namespace std;

void solution(){
    int x,y; cin>>x>>y;

    int posicion = 0;
    int ans = x ^ y;
    while ((ans & 1) == 0){
        ans >>= 1;
        posicion ++;
    }

    cout<< (int)pow(2,posicion)<<endl;;
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}
