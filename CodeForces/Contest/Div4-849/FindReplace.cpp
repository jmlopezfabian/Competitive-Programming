#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n; cin>>n;
    string entry_string;
    cin>>entry_string;
    string binary_string;
    map <char,char> mapValue;
    string ans = "YES";
    vector<int> vector_aux;

    for(int i=0;i<n;i++){
        //Hacemos un string binario alternado.
        if(i%2 == 0){
            binary_string.push_back('0');
        }else{
            binary_string.push_back('1');
        }
    }

    for(int i=0; i<n; i++){
        if(mapValue.empty()){
            mapValue.insert({entry_string[i],binary_string[i]});
        }
        //else{
        //    if(mapValue.find(entry_string[i]) != mapValue.end()){
        //        ans = "NO";
        //        break;
        //    }
        //}
        mapValue.insert({entry_string[i],binary_string[i]});
    }
    bool aux = true;
    
    cout<<"\n";
    for(auto it = mapValue.begin();it!=mapValue.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    
    int suma_1 = 0;
    int suma_0 = 0;

    for(auto it = mapValue.begin();it!=mapValue.end();it++){
        if(it->second == '1'){
            suma_1 ++;
        }else{
            suma_0 ++;
        }
    }
    cout<<"\n";
    cout<<suma_1<<" "<<suma_0<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
        }
}