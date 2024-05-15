#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

typedef struct
{
    int size;
    vector<ll> nums;
    vector<ll> sums;

    void init(int n){
        size = pow(2,ceil(log2(n)));
    }

    
}segmentTree;

int main(){
    int n,m; cin>>n>>m;
    segmentTree tree;
    tree.init(n);
    vector<ll> nums(tree.size,0);

    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    tree.nums = nums;

    
}