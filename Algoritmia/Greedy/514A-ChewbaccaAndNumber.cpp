#include <bits/stdc++.h>

using namespace std;

int main(){
    string num; cin>>num;

    int n = num.size();
    for(int i=0; i<n; i++){
        if(n == 1){
            break;
        }
        if(num[i] - '0' >= 5){
            if(num[i] != '9' && i == 0){
                num[i] = '9' - (num[i] -'0');
            }
            else{
                num[i] = '9' - (num[i] -'0');
            }
        }
    }
    cout<<num<<endl;
}