//link: https://codeforces.com/contest/489/problem/B
//---------------Pendiente---------------

#include <bits/stdc++.h>

using namespace std;

int strStr(string haystack, string needle) {
    int i=0,j=0;
    int a = -1;
    int contador = 0;
    bool flag = false;
    while(i< needle.size() && j<haystack.size()){
        if(haystack[j] == needle[i]){
            if(a == -1){
                a = j;
            }
            i++;
            j++;
            contador ++;
            flag = true;
        }else{
            if(haystack[j] != needle[i] && flag == true){
                flag = false;
                break;
            }
            j++;
        }
    }
    if(flag == true && contador == needle.size()){
        return a;
    }else{
        return -1;
    }
}


int main(){
    string haystack = "mississippi";
    string needle = "issip";
    cout<<strStr(haystack,needle);
}
