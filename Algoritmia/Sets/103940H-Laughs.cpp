#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x; cin>>n>>x;
    vector<int> nums;
    set<int> set1;
    int aux;
    for(int i = 0; i<n; i++){

        cin>>aux;
        nums.push_back(aux);
    }

    int j = 1;
    int multiplo = 1;
    
    for(int i = 0; i<n; i++){
        j = 1;
        multiplo = 1;
        while((nums[i] * j) <= x){
            
            multiplo = nums[i] * j;
            //cout<<multiplo<<endl;
            set1.insert(multiplo);
            j++;
        }
    }

    cout<<set1.size()<<endl;
}