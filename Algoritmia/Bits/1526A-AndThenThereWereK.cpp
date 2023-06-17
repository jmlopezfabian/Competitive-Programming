#include<bits/stdc++.h>

using namespace std;
int msb(int n)
{
    //find the position of the most significant set bit and then compute the value of the number 
    //with a set bit at k-th position. 
    int ans = 1;
    while (n) {
        ans *= 2;
        n /= 2;
    }
      ans/=2;
    return ans;
}

//Solution TLE
//void solution(){
//    int n; cin>>n;
//    int ans;
//    while(__builtin_popcount(n) != 1){
//        n -= 1;
//    }
//    ans = n-1;
//    cout<<ans<<endl;
//}

void solution(){
    int n; cin>>n;
    cout<<msb(n)-1<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}