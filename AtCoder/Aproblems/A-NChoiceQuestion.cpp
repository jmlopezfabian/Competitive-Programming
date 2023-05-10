#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n,a,b;
    cin>>n>>a>>b;
    vector <int> c;

    int sum = a+b;
    int ans;
    int aux;
    for(int i=0; i<n; i++){
        cin>>aux;
        c.push_back(aux);
    }

    for(int i=0; i<n; i++){
        if(c[i] == sum){
            ans = i;
            break;
        }
    }
    //cout<<sum<<endl;
    cout<<ans+1<<endl;
}

int main(){
    solution();
}