#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
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

//Using BinarySearch
int main(int argc, char** argv){
    ios_base::sync_with_stdio(false);
    
    ll n,k; cin>>n>>k;
    vector<int> nums(n);
    
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    sort(nums.begin(), nums.end());
    
    ll mid = n / 2;

    ll media_actual = nums[mid];
    ll media_max = nums[mid] + k;

    while(media_actual <= media_max){
        ll media_candidata = media_actual + (media_max - media_actual)/2;

        ll cantidad_op = 0;
        for(int i = mid; i<n; i++){
            cantidad_op += max(0ll, media_candidata - nums[i]);
        }
        //cout<<cantidad_op;
        if(cantidad_op <= k){
            media_actual = media_candidata+1;
        }else{
            media_max = media_candidata-1;
        }
    }

    cout<<media_actual-1<<endl;
}