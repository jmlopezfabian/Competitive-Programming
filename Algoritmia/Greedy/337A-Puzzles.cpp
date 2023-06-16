#include <bits/stdc++.h>
 
using namespace std;
 
void solution(){
    int n,m,aux; cin>>n>>m;
    vector<int> pieces(m);
    for(int i=0; i<m; i++){
        cin>>pieces[i];
    }
    sort(pieces.begin(), pieces.end());
    int min = pieces[n-1] - pieces[0];
    for(int i=1; i<m-n+1; i++){
        if( pieces[i+n-1] - pieces[i] < min){
            min = pieces[i+n-1] - pieces[i];
        }
    }
    cout<<min<<endl;
}
 
int main(){
    solution();
}
