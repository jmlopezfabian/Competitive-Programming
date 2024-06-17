#include <bits/stdc++.h>

using namespace std;

bool sePuede(const vector<int>& positions, int k, int d) {
    int ans = 1;
    int u = positions[0];
    
    for (int i = 1; i < positions.size(); ++i) {
        if (positions[i] - u >= d) {
            ans++;
            u = positions[i];
            if (ans == k) {
                return true;
            }
        }
    }
    return false;
}

int binaria(int n, vector<int>& positions, int k) {
    sort(positions.begin(), positions.end());
    
    int l = 0;
    int r = positions[n - 1] - positions[0];
    int mejor = 0;
    
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (sePuede(positions, k, m)) {
            mejor = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    
    return mejor;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin >> n;
    
    vector<int> positions(n);

    for (int i = 0; i < n; ++i)
        cin >> positions[i];
    
    int k;cin >> k;
    cout << binaria(n, positions, k) << endl;
}