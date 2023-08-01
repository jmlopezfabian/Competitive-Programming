#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector<int> c) {
    //Greedy aproach
    int ans = 0;
    int i=0;
    while(i < c.size()-1){
        if(c[i+2] != 1){
            i += 2;
        }else{
            i += 1;
        }
        ans++;
    }
    return ans;
}


int main(){
    vector<int> c = {0,0,0,0,1,0};
    cout<<jumpingOnClouds(c)<<endl;
}