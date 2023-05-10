#include <bits/stdc++.h>

using namespace std;

void solution(){
    int l,r;
    cin>>l>>r;
    string num;
    set<char> nums;
    string ans;
    for(int i =l; i<=r; i++){
        num = to_string(i);
        for(int j=0; j<num.length(); j++){
            nums.insert(num[j]);
        }
        if (nums.size() == num.size()){
            ans =  num;
            break;
        }else{
            ans = "-1";
            nums.clear();
        }
    }
    cout<<ans;
}

int main(){
    solution();
}