#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int m;
    cin >> m;
    multiset<int> d;
    for (int i = 0; i < m; i++) {
        int aux;
        cin >> aux;
        d.insert(aux);
    }

    map<int, int> count_b;
    for (int i = 0; i < n; i++) {
        count_b[b[i]]++;
    }

    for (auto [value, count] : count_b) {
        for (int i = 0; i < count; i++) {
            auto it = d.lower_bound(value);
            if (it == d.end() || *it != value) {
                cout << "NO" << endl;
                return;
            } else {
                d.erase(it);
            }
        }
    }

    cout << "YES" << endl;
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
