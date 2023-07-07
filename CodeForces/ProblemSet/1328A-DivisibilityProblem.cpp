#include <bits/stdc++.h>

using namespace std;


//TLE
//void solution(){
//    int a,b; cin>>a>>b;
//    int ans = 0;
//    while(a%b != 0){
//        ans++;
//        a++;
//    }
//    cout<<ans<<endl;
//}

void solution(){
    int a,b; cin>>a>>b;
    if(a%b == 0){
        cout<<0<<endl;
    }else{
        cout<< (b *((a/b) + 1)) - a<<endl;
    }
    
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}