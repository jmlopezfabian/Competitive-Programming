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
//
    //vector<int> sum;
    //int suma = 0;
//
    //int l = 0, r = k-1;
    //while(r<n){
    //    for(int i = l; i<=r; i++){
    //        suma += arr[i];
    //    }
    //    sum.push_back(suma);
    //    suma = 0;
    //    l++;
    //    r++;
    //}
//
    ////for(int i=0;i<n;i++){
    ////    cout<<sum[i];
    ////}
    //int min = sum[0];
    //int index = 0;
    //for(int i=0;i<n-k+1;i++){
    //    if(sum[i]<min){
    //        min = sum[i];
    //        index = i;
    //    }
    //}
    //cout<<index+1;

    //Tecnica de suma acumulada
    int prefix_sum[n];
    prefix_sum[0] = arr[0];
    for(int i=1; i<n; i++){
        prefix_sum[i] = prefix_sum[i-1] + arr[i];
    }
    int suma = 0;
    int l = 0, r = k-1;
    int min = prefix_sum[r];
    int index = 0;

    int min_suma = suma;
    while(r<n){
        int sum = prefix_sum[r] - prefix_sum[l] + arr[l];
        if(sum < min){
            min = sum;
            index = l;
        }
        l++;
        r++;
    }
    cout<<index+1;

    //for(int i=0;i<n;i++){
    //    cout<<prefix_sum[i]<<" ";
    //}

}