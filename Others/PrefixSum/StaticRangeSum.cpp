//https://judge.yosupo.jp/problem/static_range_sum
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,q; cin>>n>>q;
    vector<long long> nums;
    vector<long long> prefix;
    int aux;
    for(int i=0; i<n; i++){
        cin>>aux;
        nums.push_back(aux);
    }
    long long suma = 0;
    prefix.push_back(suma);
    for(int i=0;i<n;i++){
        suma += nums[i];
        prefix.push_back(suma);
    }
    for(int i=0;i<q; i++){
        int l,r;
        cin>>l>>r;
        cout<<prefix[r] - prefix[l]<<endl;
    }
}
