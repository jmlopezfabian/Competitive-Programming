#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:

    char nextGreatestLetter(vector<char>& letters, char target) {
        return letters[upperBound(letters,target)];
    }

    int upperBound(vector<char>& letters, char target){
        int l = 0;
        int r = letters.size()-1;

        while(l <= r){
            int mid = l + (r - l) / 2;
            if(letters[mid] > target)
                r = mid - 1;
            else
                l = mid + 1;
        }
        if(l > letters.size()-1)
            l = 0;
        return l;
    }
};


int main(int argc, char** argv){
    Solution sol;
    vector<char> letters = {'x','x','y','y'};
    char target = 'z';

    cout<<sol.nextGreatestLetter(letters, target)<<endl;
}