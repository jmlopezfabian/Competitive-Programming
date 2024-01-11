#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    map<string,int> bucket;

    string aux;
    for(int i=0; i<n; i++){
        cin>>aux;
        bucket[aux]++;
        if(bucket[aux] == 1){
            cout<<"OK"<<endl;
        }else{
            cout<<aux<<bucket[aux]-1<<endl;
        }
    }
}