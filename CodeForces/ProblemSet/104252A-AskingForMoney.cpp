#include <bits/stdc++.h>

using namespace std;

void solution(){
    string ans = "";
    int n; cin>>n;
    vector<bool> visited(n+1,false);
    vector<int> money(n+1,0);

    int a,b;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        
        if(i == 0){
            money[a] -= 1;
        }

        if(!visited[b]){
            money[a] += 1;
            money[b] -= 1;
        }
        visited[a] = visited[b] = true;
    }

    for(int i=1; i<=n; i++){
        if(!visited[i]){
            ans += 'N';
        }else{
            if(money[i] >= 1){
                ans += 'Y';
            }else{
                ans += 'N';
            }
        }
    }
    for(auto it: visited){
        cout<<it<<' ';
    }
    cout<<endl;
    for(auto it: money){
        cout<<it<<' ';
    }
    cout<<endl;
    cout<<ans<<endl;
}

int main(){
    //int t;
    //cin>>t;
    //while (t--){
    //    solution();
    //}
    solution();
}