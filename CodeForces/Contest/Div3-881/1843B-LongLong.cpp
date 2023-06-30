#include <bits/stdc++.h>
 
using namespace std;
 
void solution(){
    int n;cin>>n;
    vector<long long> nums;
    long long aux;
    for(int i=0; i<n; i++){
        cin >>aux;
        if(aux != 0)
            nums.push_back(aux);
    }
    
    long long suma = 0;
    int numOperaciones = 0;
 
    bool flag = false;
    n = nums.size();
 
    for(int i=0; i<n; i++){
        if(nums[i] > 0){
            if(flag == true){
                numOperaciones++;
            }
            flag = false;
        }
        if(nums[i] < 0){
            nums[i] = nums[i] * -1;
            flag = true;
            if(i == (n-1)){
                numOperaciones++;
            }
        }
        suma += nums[i];
    }
    cout<<suma<<" "<<numOperaciones<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
}
