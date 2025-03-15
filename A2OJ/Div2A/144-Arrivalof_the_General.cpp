#include <bits/stdc++.h>

using namespace std;

int indiceMin (vector<int> nums){
    int min = nums[0];
    int indice = 0;
    for(int i = 0; i<nums.size(); i++){
        if (nums[i] <= min){
            indice = i;
            min = nums[i]; 
        }
    }
    return indice;
}

int indiceMax (vector<int> nums){
    int min = nums[0];
    int indice = 0;
    for(int i = nums.size() - 1; i>=0; i--){
        if (nums[i] >= min){
            indice = i;
            min = nums[i]; 
        }
    }
    return indice;
}

int main(){
    int n;
    cin>>n;
    vector<int> soldiers(n);
    
    for(int i=0; i<n; i++){
        cin>>soldiers[i];
    }

    int indice_min = indiceMin(soldiers);
    int indice_max = indiceMax(soldiers);
    //cout<<indice_min<<" "<<indice_max<<endl;
    int total_movs = (soldiers.size() - indice_min - 1) + indice_max;
    if (indice_min < indice_max){
        total_movs -= 1;
    }
    cout<<total_movs<<endl;
}