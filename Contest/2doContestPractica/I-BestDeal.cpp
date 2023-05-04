#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr;
    int aux;

    for(int i=0; i<3; i++){
        cin>>aux;
        arr.push_back(aux);
    }

    int sum_acumulada = 0;
    int sum_total = 0;
    sort(arr.begin(),arr.end());
    
    for(int i=0; i<3; i++){
        sum_acumulada += arr[i];
        if(sum_acumulada >= 500){
            sum_acumulada -= 100;
            sum_total += sum_acumulada;
            sum_acumulada = 0;
        }
    }
    if(sum_total == 0){
        cout<<sum_acumulada<<endl;
    }else{
        cout<<sum_total;
    }
}