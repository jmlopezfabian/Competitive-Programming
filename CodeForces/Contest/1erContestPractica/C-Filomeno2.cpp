#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,aux;
    cin>>n>>k;
    vector<int> arr;

    for(int i=0;i<n;i++){
        cin>>aux;
        arr.push_back(aux);
    }
    int suma = 0;

    int l = 0, r = k-1;
    int min = 0;
    int index = 0;
    while(r<n){
        for(int i = l; i<=r; i++){
            suma = suma - arr[i-1] + arr[i+k-1];
        }
        if(l == 0){
            min = suma;
        }
        else if(suma < min){
            min = suma;
            index = l;
        }
        l++;
        r++;
        suma = 0;
    }
    cout<<index+1;
}