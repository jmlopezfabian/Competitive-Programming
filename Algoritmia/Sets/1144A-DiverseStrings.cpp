#include <bits/stdc++.h>

using namespace std;

void solution(){
    string str;
    cin>>str;
    set<char> diverse;
    string ans;
    

    for(int i = 0; i<str.length(); i++){
        diverse.insert(str[i]);
    }
    if(diverse.size() != str.length()){
        ans = "NO";
    }else{
        ans = "YES";
        vector<char> caracteres;
        for(auto x: diverse){
            caracteres.push_back(x);
        }
        caracteres.resize(diverse.size());
        int l = 0, r = 1, suma =0;
        while(r<caracteres.size()){
            suma = caracteres[r] - caracteres[l];
            if(suma > 1){
                ans = "NO";
                break;
            }
            else{
                ans = "YES";
            }
            l++;
            r++;
            suma = 0;
        }
    }

    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
    
}