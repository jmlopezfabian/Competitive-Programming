#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n) {
    long ans = 0;
    long num_strings = n / s.size();
    long num_a = 0;
    for(int i =0; i<s.size(); i++){
        if(s[i] == 'a'){
            num_a++;
        }
    }
    ans = num_strings * num_a;
    
    for(int i=0; i<n%s.size(); i++){
        if(s[i] == 'a'){
            ans++;
        }
    }
    return ans;
}

int main(){
    cout<<repeatedString("aba",10)<<endl;
}