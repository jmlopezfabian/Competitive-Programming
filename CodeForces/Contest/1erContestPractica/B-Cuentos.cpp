#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;
    long long aux;
    vector<long long> arr;

    for(int i=0; i<n; i++){
        cin>>aux;
        arr.push_back(aux);
    }
    int l=0, r=0;
    long long suma = 0, contador = 0;

    while(l<n && r<=n){
        if(suma < k && r<n){
            suma += arr[r];
            r++;
        }else if(suma >= k){
            contador += n-r+1;
            l++;
            r = l;
            suma = 0;
        }else{
            l++;
            r =l;
            suma = 0;
        }
    }

    cout<<abs(contador);
}