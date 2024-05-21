#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n; cin>>n;
    string str; cin>>str;
    int count = 0;
    int i = 0;

    while(i < n - 2){
        string aux = "";
        for(int j=i;j<i+3; j++){
            aux+=str[j];
        }
        if(aux == "map" || aux == "pie"){
            count ++;
            i += 3;
        }else{
            i++;
        }
    }

    cout<<count<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}
