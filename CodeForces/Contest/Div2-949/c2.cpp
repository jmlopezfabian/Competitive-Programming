#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n; cin>>n; vector<int> a(n); vector<int> b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    int m; cin>>m; multiset<int> d;
    for(int i=0; i<m; i++){
        int aux; cin>>aux;
        d.insert(aux);
    }

    multiset<int> modificaciones;

    for(int i=0; i<n; i++){
        if(a[i] != b[i]){
            modificaciones.insert(b[i]);
        }
    }

    for(auto it: modificaciones){
        if(d.find(it) == d.end()){
            //No esta
            cout<<"NO"<<endl;
            return;
        }else{
            d.erase(it);
        }
    }
    cout<<"YES"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
