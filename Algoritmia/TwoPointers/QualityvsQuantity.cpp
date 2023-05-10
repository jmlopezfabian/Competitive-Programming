#include <bits/stdc++.h>

using namespace std;

bool QualityandQuantity(vector<int> v){
    int sum_red = 0, sum_blue = 0, cont_red = 0, cont_blue = 0;
    int l = 0, r = v.size() - 1;

    sort(v.begin(), v.end());

    while(l <= r){
        if(v[l] < v[r] && cont_red <= cont_blue){
            sum_red = v[l] + sum_red;
            sum_blue = v[r] + sum_blue;
            cont_red ++;
            cont_blue ++;
            l++;
            r--;
        }else{
            l++;
            r--;
        }
    }

    if(cont_red < cont_blue && sum_red > sum_blue){
        return true;
    }else{
        return false;
    }
}

int main(){
    int t,n;
    //cin>>t;
    vector<int> v = {2,8,6,3,1};
    //for(int i=0; i<t; i++){
    //    cin>>n;
    //    for(int j=0; j<n; j++){
//
    //    }
    //}
    int sum_red = 0, sum_blue = 0, cont_red = 0, cont_blue = 0;
    int l = 0, r = v.size() - 1;

    //sort(v.begin(), v.end());

    while(l <= r){
        if(v[l] < v[r]){
            cont_blue = v[l] + cont_blue;
            sum_blue += v[l];
            l++;
            r--;
        }else if(v[r] < v[l]){
            cont_red += v[r];
            sum_red +=  v[r];
            l++;
            r--;
        }else{
            l++;
            r--;
        }
    }
    if(cont_red < cont_blue && sum_red > sum_blue){
        cout<<"True";
    }else{
        cout<<"False";
    }
}