#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k; cin>>n>>k;

    int total_minutes = 240;

    total_minutes -= k;

    int i = 1;
    int ans = 0;
    while(total_minutes && ans < n){
        total_minutes -= 5 * i;
        if(total_minutes < 0){
            break;
        }
        ans++;
        i++;
    }
    cout<<ans<<endl;
}