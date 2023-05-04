//link: https://codeforces.com/problemset/problem/1791/C

#include <bits/stdc++.h>

using namespace std;

int PrepenAndAppend(string str){
    int l = 0, r = str.length() - 1, contador = 0;
    while(l <= r){
        if((str[l] == '0' && str[r] == '1') || (str[l] == '1' && str[r] == '0')){
            contador++;
            l++;
            r--;
        }else{
            break;
        }
    }
    return str.length() - 2*contador;
}

int main(){
    int t,n;
    //string str = "1011011010";
    string str;
    cin>>t;

    for(int i=0; i<t; i++){
        cin>>n;
        cin>>str;
        cout<<PrepenAndAppend(str);
        cout<<"\n";
    } 
}