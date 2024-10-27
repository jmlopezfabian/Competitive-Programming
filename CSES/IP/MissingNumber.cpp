//https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    int number[n + 1];
    for(int i=0; i<n-1; i++){
        int aux;
        cin>>aux;
        number[aux] = 1;
    }
    for(int i=1; i<n+1; i++){
        if (number[i] != 1){
            cout<<i<<endl;
        }
    }
}