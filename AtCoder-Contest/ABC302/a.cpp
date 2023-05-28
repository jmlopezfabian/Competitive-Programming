#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b;
    cin>>a>>b;
    long long q = a/b;
    if(q*b < a){
        q++;
    }
    printf("%lld\n",q);
}
