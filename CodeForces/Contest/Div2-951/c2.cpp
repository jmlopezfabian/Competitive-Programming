#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> k(n);
        for (int i = 0; i < n; i++) {
            cin >> k[i];
        }

        long long l = 1;
        for (int i = 0; i < n; i++) {
            l = lcm(l, k[i]);
        }

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += (l / k[i]);
        }

        if (sum >= l) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n; i++) {
                cout << (l / k[i]) << " ";
            }
            cout << endl;
        }
    }

    return 0;
}