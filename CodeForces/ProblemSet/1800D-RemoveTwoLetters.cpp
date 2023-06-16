#include <bits/stdc++.h>
 
using namespace std;
 
//MLE
//void solution(){
//    int n; cin>>n;
//    string str; cin>>str;
//    string aux1;
//    set<string> set1;
//
//    for(int i=0; i<n;i++){
//        aux1 = str;
//        if(i+1 >= n){
//            break;
//        }
//        aux1.erase(i,1);
//        aux1.erase(i,1);
//        set1.insert(aux1);
//    }
//    cout<<set1.size()<<endl;
//}
//
//int main(){
//    int t; cin>>t;
//    while(t--){
//        solution();
//    }
//}
 
void solution(){
    int n; cin>>n;
    string str; cin>>str;
 
    int suma = 0;
    for(int i=0; i+1<n; i++){
        if(str[i-1] == str[i+1]){
            suma += 1;
        }
    }
    cout<< (n - 1) - suma<<endl;
}
 
int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
}
