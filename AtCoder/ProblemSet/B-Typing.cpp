# include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    string s,t;
    cin>>s>>t;

    int j = 0;
    int i = 0;
    while (i<s.size()){
        if(s[i] == t[j]){
            cout<<j + 1<<" ";
            i++;
        }
        j++;
    }    
}