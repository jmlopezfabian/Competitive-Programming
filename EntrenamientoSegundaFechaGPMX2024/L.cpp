#include <bits/stdc++.h>

using namespace std;

void solution(){
    int a1,p1,a2,p2; cin>>a1>>p1>>a2>>p2;
    int suma_a = a1 + a2;
    int suma_p = p1 + p2;
    if(suma_a > suma_p){
        cout<<"A"<<endl;
    }else if(suma_p > suma_a){
        cout<<"P"<<endl;
    }else{
        cout<<"D"<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}