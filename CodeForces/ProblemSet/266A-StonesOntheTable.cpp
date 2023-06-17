#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;cin>>n;
    char letters[n];
    for(int i=0;i<n;i++){
        cin>>letters[i];
    }
    int ans = 0;
    for(int i=0;i+1<n;i++){
        if(letters[i] == letters[i+1])
            ans ++;
    }
    cout<<ans<<endl;
}
