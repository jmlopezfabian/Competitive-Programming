#include <bits/stdc++.h>
 
using namespace std;
 
void solution(){
    string a,b;
    cin>>a>>b;
 
    if(a[a.length()-1] == b[b.length()-1]){
        if(a[a.length()-1] == 'S'){
            if(a.length() > b.length()){
                cout<<"<"<<endl;
            }else if(a.length() < b.length()){
                cout<<">"<<endl;
            }else{
                cout<<"="<<endl;
            }
        }else if(a[a.length()-1] == 'L'){
            if(a.length() < b.length()){
                cout<<"<"<<endl;
            }else if(a.length() > b.length()){
                cout<<">"<<endl;
            }else{
                cout<<"="<<endl;
            }
        }else{
            cout<<"="<<endl;
        }
    }
    else{
        if(a[a.length()-1] == 'L'){
            cout<<">"<<endl;
        }
        else if(b[b.length()-1] == 'L'){
            cout<<"<"<<endl;
        }
        else if(a[a.length()-1] == 'S'){
            cout<<"<"<<endl;
        }
        else if(b[b.length()-1] == 'S'){
            cout<<">"<<endl;
        }
        else if(a[a.length()-1] == 'M' && b[b.length()-1 == 'S']){
            cout<<">"<<endl;
        }
        else{
            cout<<"<"<<endl;
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}
