#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solution() {
    int l, r, k;
    cin >> l >> r >> k;
    int count = 0;
    for (int n = pow(10, l); n < min(pow(10, r), pow(10, r - 1) * k + 1); ++n) {
        if (digitSum(n) % (k - 1) == 0) {
            count++;
        }
    }
    cout << count % MOD << endl;
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
