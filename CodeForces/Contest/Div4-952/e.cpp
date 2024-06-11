#include <bits/stdc++.h>

using namespace std;

void solution() {
    long long x, y, z, k;
    cin >> x >> y >> z >> k;
    long long ans = 0;

    for (long long i = 1; i * i * i <= k; i++) {
        if (k % i == 0) {
            long long k1 = k / i;
            for (long long j = 1; j * j <= k1; j++) {
                if (k1 % j == 0) {
                    long long l = k1 / j;
                    if (i <= x && j <= y && l <= z) {
                        ans = max(ans, (x - i + 1) * (y - j + 1) * (z - l + 1));
                    }
                    if (i <= x && l <= y && j <= z && j != l) {
                        ans = max(ans, (x - i + 1) * (y - l + 1) * (z - j + 1));
                    }
                    if (j <= x && i <= y && l <= z && i != j) {
                        ans = max(ans, (x - j + 1) * (y - i + 1) * (z - l + 1));
                    }
                    if (j <= x && l <= y && i <= z && i != l) {
                        ans = max(ans, (x - j + 1) * (y - l + 1) * (z - i + 1));
                    }
                    if (l <= x && i <= y && j <= z && i != l && j != l) {
                        ans = max(ans, (x - l + 1) * (y - i + 1) * (z - j + 1));
                    }
                    if (l <= x && j <= y && i <= z && i != j && i != l && j != l) {
                        ans = max(ans, (x - l + 1) * (y - j + 1) * (z - i + 1));
                    }
                }
            }
        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solution();
    }

    return 0;
}
