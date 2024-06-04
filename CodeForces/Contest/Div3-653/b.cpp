#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solution(){
    int n; cin>>n;
    vector<ll> pow6 = {1,6};

    for(int i=2; i<13; i++){
        pow6.push_back(pow6.back() * 6);
    }


   
    //cout<<n<<endl;

    int pos;
    for(int i=0; i<13; i++){
        if(n < pow6[i]){
            pos = i;
            break;
        }
    }
    int c = log2( pow(6,pos) / n);

    if(n == 1){
        cout<<0<<endl;
    }
    else if( n * pow(2,c) != pow(6,pos)){
        cout<<-1<<endl;
    }else{
        cout<<pos + c<<endl;
    }
    cout<<pos<<" "<<pow6[pos];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        solution();
    }
}
