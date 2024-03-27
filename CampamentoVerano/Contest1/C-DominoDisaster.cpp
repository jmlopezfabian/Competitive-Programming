#include <bits/stdc++.h>
 
using namespace std;
 
void solution(){
    int n;
    cin>>n;
    string a,aux;
    cin>>a;
    for(int i =0; i<n;i++){
        if(a[i]=='L'){
            aux+='L';
        }else if(a[i]=='R'){
            aux+='R';
        }else if(a[i]=='U'){
            aux+='D';
        }else{
            aux+='U';
        }
    }
    cout<<aux<<endl;
}
 
int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
}
