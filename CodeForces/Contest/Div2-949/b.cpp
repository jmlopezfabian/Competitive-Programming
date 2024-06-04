#include <bits/stdc++.h>

using namespace std;

void solution() {
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> nums(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int fav = nums[f - 1];

    sort(nums.begin(), nums.end(), greater<int>());

    int count_fav_in_first_k = 0;
    int count_fav_total = 0;

    for (int i = 0; i < n; ++i) {
        if (nums[i] == fav) {
            ++count_fav_total;
            if (i < k) {
                ++count_fav_in_first_k;
            }
        }
    }

    if (count_fav_in_first_k == count_fav_total) {
        cout << "YES" << endl;
    } else if (count_fav_in_first_k == 0) {
        cout << "NO" << endl;
    } else {
        cout << "MAYBE" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
