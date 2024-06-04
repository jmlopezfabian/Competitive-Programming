#include <iostream>
#include <vector>
#include <string>

using namespace std;

int max_coins(int current, vector<int> &dp, const string &camino) {
    int n = camino.size();
    if (current >= n) {
        return 0;
    }
    if (dp[current] != -1) {
        return dp[current];
    }
    int result = 0;
    if (camino[current] == '@') {
        result = 1;  // Found a coin
    }
    if (current + 1 < n && camino[current + 1] != '*') {
        result += max_coins(current + 1, dp, camino);
    }
    if (current + 2 < n && camino[current + 2] != '*') {
        result = max(result, (camino[current] == '@' ? 1 : 0) + max_coins(current + 2, dp, camino));
    }
    dp[current] = result;
    return result;
}

void solution() {
    int n;
    cin >> n;
    vector<int> dp(n, -1);
    string camino;
    cin >> camino;
    int ans = max_coins(0, dp, camino);
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
