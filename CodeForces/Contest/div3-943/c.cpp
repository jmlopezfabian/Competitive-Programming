#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n; cin>>n;
    vector<int> x(n,0);
    vector<int> a;
    vector<int> difs(n,0);
    for(int i = 1; i<n; i++){
        cin>>x[i];
    }

    //difs.push_back(x[1]);
    difs[0] = x[1];
    for(int i = 2; i<n; i++){
        difs[i-1] = x[i] - x[i-1];
        //difs.push_back(x[i] - x[i-1]);
    }

    //for(auto it: difs){
    //    cout<<it<<" ";
    //}
    //cout<<endl;
    //for(auto it: x){
    //    cout<<it<<" ";
    //}
    //cout<<endl;

    a.push_back(x[1] + 1);
    //cout<<a[0]<<endl;

    for(int i = 1; i<n; i++){
        //cout<<"Dif: "<<difs[i]<<endl;
        //cout<<"Suma: "<<a[i-1] + x[i]<<endl;
        if((a[i-1] + x[i] <= difs[i])){
            //cout<<"Hola";
            a.push_back(a[i-1] + x[i] + difs[i]);
        }else{
            a.push_back(a[i-1] + x[i]);
        }
    }
    for(auto it: a){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    int t;cin>>t;
    while(t--){
        solution();
    }
}