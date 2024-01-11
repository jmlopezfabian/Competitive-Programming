#include <bits/stdc++.h>

using namespace std;

bool canBuildSquare(const vector<int>& buckets) {
    long long int totalSquares = 0;
    for (int squaresInBucket : buckets) {
        totalSquares += squaresInBucket;
    }

    long long int sideLength = sqrt(totalSquares);
    return (sideLength * sideLength == totalSquares);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> buckets(n);
        for (int i = 0; i < n; ++i) {
            cin >> buckets[i];
        }

        if (canBuildSquare(buckets)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
