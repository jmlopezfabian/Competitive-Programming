#include <bits/stdc++.h>

using namespace std;

void solution(){
    long long int n,aux;
    long long int t;
    cin>>n>>t;
    vector<long long int> arr;
    for(int i=0; i<n;i++){
        cin>>aux;
        arr.push_back(aux);
    }
    //sort(arr.begin(), arr.end());
    //imprimir arreglo
    //for(int i=0; i<n;i++){
    //    cout<<arr[i]<<" ";
    //}
    long long int j;
    long long sum = 0;
    int ans = 0;
    for(int i=0; i<n;i++){
        sum += arr[i];
        if(sum <= t){
            ans++;
        }else{
            sum -= arr[j];
            j++;
        }
    }
    cout<<ans;
}

int main(){
    solution();
}