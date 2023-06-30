#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    bool binarySearch(int num, int l, int r){
        if( l > r){
            return false;
        }
        double mid = l + (r-l) / 2;
        if(mid ==(double) (num/mid)){
             return true;
        }
        if(mid > (double)( num / mid)){
            return binarySearch(num,l,mid-1);
        
        }
        return binarySearch(num,mid+1,r);
    }

    bool judgeSquareSum(int c) {
        set<long long> squareSet;
        squareSet.insert(0);
        for(long long i=0; i<=sqrt(c) +1; i++){
            squareSet.insert(i*i);
        }

        for(auto a : squareSet){
            long long b = c - a;
            if(squareSet.find(b) != squareSet.end()){
                return true;
            }
        }
        return false;
    }
};

int main(){
    Solution sol;
    cout<<sol.judgeSquareSum(4);

}