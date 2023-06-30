#include <bits/stdc++.h>

using namespace std;

int main(){
    string num;
    cin>>num;
    map<char,int> bucket1;

    for(int i=0; i<num.length(); i++){
        if(num[i] == '4' || num[i] == '7'){
            bucket1[num[i]] ++;
        }
    }

    int suma = 0;
    for(auto it = bucket1.begin(); it != bucket1.end(); it++){
        suma += it->second;
    }
    //cout<<suma<<endl;
    string ans = "NO";

    while(suma != 0){
        if(suma % 10 == 4 || suma % 10 == 7){
            ans = "YES";
            break;
        }
        suma /= 10;
    }
    cout<<ans<<endl;
}