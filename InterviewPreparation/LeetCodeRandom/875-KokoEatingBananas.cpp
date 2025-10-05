#include <bits/stdc++.h>
using namespace std;

long long totalHours(const vector<int>& piles, int speed) {
        long long hours = 0;
        for (int p : piles) {
            hours += ( (long long)p + speed - 1 ) / speed;
        }
        return hours;
    }

int minEatingSpeed(vector<int>& piles, int h) {
    int left = 1;
    int right = *max_element(piles.begin(), piles.end());
    int ans = right;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if ( totalHours(piles, mid) <= (long long)h ) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ans;
}

int main(){
	vector<int> piles = {3,6,7,11};
	int h = 8;
	cout<<minEatingSpeed(piles, h)<<endl;
}
