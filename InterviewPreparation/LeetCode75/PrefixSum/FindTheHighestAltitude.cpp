#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0;
        vector<int> acum;
        int ans = 0;
        for(int i: gain){
            sum += i;
            ans = max(ans, sum);
        }
        return ans;
    }
};

int main(){
    Solution sol;
    vector<int> gain = {-5,1,5,0,-7};
    cout<<sol.largestAltitude(gain)<<endl;
}