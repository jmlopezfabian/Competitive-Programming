#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n, m;
    cin >> n >> m;
    string pr;
    cin >> pr;

    map<char, int> problems;

    for (int i = 0; i < n; i++) {
        problems[pr[i]]++;
    }

    int ans = 0;

    for (char difficulty = 'A'; difficulty <= 'G'; ++difficulty) {
        if (problems[difficulty] < m) {
            ans += m - problems[difficulty];
        }
    }

    cout << ans << endl;
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
