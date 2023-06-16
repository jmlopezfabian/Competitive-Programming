#include <bits/stdc++.h>
 
using namespace std;
 
void solution(){
        int n; cin>>n;
        vector<int> a;
        int aux;
        for(int i=0; i<n; i++){
            cin>>aux;
            a.push_back(aux);
        }
        int l = 0, r = 0,contador = 0, max = 0;
 
        while(l<n && r<n){
            contador = 0;
            while(r<n){
                if(a[l] == 0 && a[r] == 0){
                    r++;
                    contador ++;
                }
                else{
                    l = r+1;
                    r = l;
                    break;
                }
            }
            if(contador > max){
                max = contador;
            }
        }
        cout<<max<<endl;
}
 
int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}
