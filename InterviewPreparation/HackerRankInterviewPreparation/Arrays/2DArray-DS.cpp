#include <bits/stdc++.h>

using namespace std;

int hourglassSum(vector<vector<int>> arr);
int sum_hourglass(int row, int column, vector<vector<int>> arr);


int sum_hourglass(int row, int column, vector<vector<int>> arr){
    int suma = 0;
    for(int i=row; i<=row+2; i++){
        for(int j=column; j<=column+2;j++){
            if((i == row+1 && j == column) || (i==row+1 && j==column+2)){
                continue;
            }else{
                suma += arr[i][j];
            }
        }
    }
    return suma;
}

int hourglassSum(vector<vector<int>> arr) {
    int max_sum = INT_MIN;
    for(int i=0 ; i+2<arr.size(); i++){
        for(int j=0; j+2<arr[i].size(); j++){                    
            //int current_sum = sum_hourglass(i, j, arr);
            //cout << "i: " << i << ", j: " << j << ", sum: " << current_sum << endl;
            max_sum = max(max_sum, sum_hourglass(i, j, arr));
        }        
    }
    return max_sum;
}

int main(){
    vector<vector<int>> arr = {
        {1, 1, 1, 0, 0, 0},
    {0, 1, 0, 0, 0, 0},
    {1, 1, 1, 0, 0, 0},
    {0, 9, 2, -4, -4, 0},
    {0, 0, 0, -2, 0, 0},
    {0, 0, -1, -2, -4, 0}
};
    //for(int i=0; i+2<arr.size(); i++){
    //    cout<<"\n";
    //    for(int j=0; j+2<arr[i].size(); j++){
    //        cout<<arr[i][j]<<" ";
    //    }
    //}
    cout<<hourglassSum(arr)<<endl;
}