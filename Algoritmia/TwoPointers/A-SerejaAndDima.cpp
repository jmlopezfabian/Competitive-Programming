//link: https://codeforces.com/problemset/problem/381/A

#include <bits/stdc++.h>

using namespace std;

int max_num(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int sum_serja = 0, sum_dima = 0;
    bool flag = true;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i=0,j=n-1;
    while(i != j){
        if(flag == true){//Sereha's turn
            sum_serja += max_num(v[i],v[j]);
            if(max_num(v[i],v[j]) == v[i]){
                i++;
            }else{
                j--;
            }
            flag = !flag;
        }else{
            sum_dima += max_num(v[i],v[j]);
            if(max_num(v[i],v[j]) == v[i]){
                i++;
            }else{
                j--;
            }
            flag = !flag;
        }
    }
    if(flag == true){
        sum_serja += v[i];
    }else{
        sum_dima += v[j];
    }
    cout<<sum_serja<<" "<<sum_dima;
}