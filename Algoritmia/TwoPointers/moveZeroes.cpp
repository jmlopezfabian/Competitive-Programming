#include <iostream>
#include <vector>

using namespace std;

int main(){
    //vector<int> nums = {4,2,4,0,0,3,0,5,1,0};
    vector<int> nums = {1,0,1};

    int i = 0,j= 1;
    int n = nums.size();
    while(i!=j && j<n){
        //for(int k=0;k<n;k++){
        //   cout<<nums[k]<<" ";
        //}
        //cout<<endl;
        if(nums[i] == 0 && nums[j] != 0){
            swap(nums[i],nums[j]);
            i++;
            j++;
        }else if(nums[i] == 0 && nums[j] == 0){
            j++;
        }
        else{
            i++;
            j++;
        }
        //cout<<"\n"<<"i: "<<i<<" j: "<<j<<endl; 
    }   
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}