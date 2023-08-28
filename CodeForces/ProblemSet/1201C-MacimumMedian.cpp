#include <bits/stdc++.h>

using namespace std;

//using MinHeap :TLE
//int main(){
//    int n;
//    int k;
//    cin>>n>>k;
//    vector<int> nums (n);
//    priority_queue<int,vector<int>, greater<int>> Minheap;
//
//    for(int i=0;i<n;i++){
//        cin>>nums[i];
//    }
//    int mid = n / 2;
//
//    sort(nums.begin(),nums.end());
//    for(int i=mid; i<n;i++){
//        Minheap.push(nums[i]);
//    }
//    int i=0;
//    while(i<k){
//        int aux = Minheap.top();
//        Minheap.pop();
//        aux++;
//        Minheap.push(aux);
//        i++;
//    }
//    cout<<Minheap.top();
//}

