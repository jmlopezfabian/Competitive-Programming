#include <bits/stdc++.h>

using namespace std;

void solution(){
    long long a,b;
    double c;
    
    cin>>a>>b>>c;
    long long cantidad = a;

    while(c > 0 and (int) b % 3 != 0){
        b++;
        c--;
        //cout<<1;
    }

    if((int) b%3 != 0 ){
        cout<<-1<<endl;
        return;
    }

    cantidad += b / 3;
    if(c > 0){
        //cout<<ceil(c/3);
        cantidad += ceil(c / 3);
        
    }

    cout<<cantidad<<endl;
}

int main(){

    int t;cin>>t;
    while(t--){
        solution();
    }
}