#include <bits/stdc++.h>

using namespace std;

int countingValleys(int steps, string path) {
    int level = 0;
    bool flag = false;
    int ans = 0;
    for(int i=0; i<path.length(); i++){
        if(flag == false){
            if(path[i] == 'D' && level == 0){
                level --;
                flag = true;
            }
            else if(path[i] == 'D'){
                level--;
            }else{
                level++;
            }
        }
        else{
            if(path[i] == 'D'){
                level--;
            }else{
                level++;
            }
            if(level == 0){
                ans++;
                flag = false;
            }
        }
    }
    return ans;
}

int main (){
    cout<<countingValleys(8,"UDDDUDUDUU")<<endl;
}