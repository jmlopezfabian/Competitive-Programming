#include <bits/stdc++.h>
 
using namespace std;
 
void solution(){
    int n;cin>>n;
    int aux;
    vector<int> odd;
    vector<int> even;
    for(int i=0; i<n; i++){
        cin>>aux;
        if(aux % 2 == 0){
            even.push_back(aux);
        }else{
            odd.push_back(aux);
        }
    }
 
    for(int i=0; i+1<odd.size();i++){
        if(odd[i] > odd[i+1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i=0; i+1<even.size();i++){
        if(even[i] > even[i+1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
 
int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
}

