# include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    string ans = "NO";
    cin>>s;
    s = '-' + s;
    int n = s.length() - 1;

    int contador = 0;

    for (int i = 1;i + i <= n;++i){
        if (s[i] != s[n - i + 1]){
            contador ++;
        }
    }
    if(contador <= 1){
        if(n%2 == 1){
            ans = "YES";
        }
        if(contador == 1){
            ans = "YES";
        }
    }

    else{
        ans = "NO";
    }
    cout<<ans<<endl;
}





