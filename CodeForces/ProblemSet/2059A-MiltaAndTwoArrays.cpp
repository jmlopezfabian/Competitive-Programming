#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n; cin>>n;
    unordered_map<int, int> a_freq; unordered_map<int, int> b_freq;
    int aux;
    for(int i=0; i<n; i++){
        cin>>aux;
        a_freq[aux]++;
    }
    for(int i=0; i<n; i++){
        cin>>aux;
        b_freq[aux]++;
    }
    int sumas_unicas = 0;
    for(auto it: a_freq){
        if(it.second >= b_freq.size()){
            sumas_unicas += b_freq.size(); 
            //it.second -= b_freq.size();
        }else{
            sumas_unicas += it.second;
            //it.second -= it.second;
        }
        if (sumas_unicas >= 3){
            //cout<<"Sumas unicas: "<< sumas_unicas<<endl;
            cout<<"YES"<<endl;
            return;
        }
    }
    //cout<<"Sumas unicas: "<< sumas_unicas<<endl;
    cout<<"NO"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        //cout<<endl;
        solution();
    }
}