#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool binarySearch(int &num, int l, int r){
        if( l > r){
            return false;
        }
        int mid = l + (r-l) / 2;
        //cout<<mid<<endl;
        //cout<<"num: "<<num/mid<<endl;
        if(mid == ceil(num/mid)){
            cout<<mid<<" "<<ceil(num/mid);
            //cout<<"Hola";
            return true;
        }
        if(mid >( num / mid)){
            return binarySearch(num,l,mid-1);
        
        }
        return binarySearch(num,mid+1,r);
    }

    bool isPerfectSquare(int num) {
        return binarySearch(num,1,num);
    }
};

int main(){
    Solution solution;
    cout<<solution.isPerfectSquare(5)<<endl;
}