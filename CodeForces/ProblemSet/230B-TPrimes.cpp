#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long x) {
    if (x < 2) return false;
    for (long long d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++) {
        long long num = nums[i];
        long long root = sqrt(num);
        if (root * root == num && isPrime(root)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
