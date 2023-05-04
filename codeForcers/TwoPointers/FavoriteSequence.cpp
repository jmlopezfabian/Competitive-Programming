//link: https://codeforces.com/problemset/problem/1462/A

#include <bits/stdc++.h>

using namespace std;

void FavoriteSequence(vector<int> v){
    int l = 0,r = v.size() - 1;
    int contador = 0;
    while(l <= r && contador < v.size()){
        if(contador == 0 || contador%2 == 0){
            cout<<v[l]<<" ";
            l++;
            contador++;
        }else{
            cout<<v[r]<<" ";
            r--;
            contador++;
        }
    }
}

int main(){
    int t,n,aux;
    vector<int> v;
    cin>>t;

    for(int i=0; i<t; i++){
        cin>>n;
        v.resize(n);
        for(int j=0; j<n; j++){
            cin>>v[j];
        }
        FavoriteSequence(v);
        cout<<"\n";
    }
}