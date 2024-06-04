#include <bits/stdc++.h>

using namespace std;

void solution() {
    int K;
    cin >> K;
    
    vector<long long> C(K), P(K);
    
    for (int i = 0; i < K; i++) {
        cin >> C[i];
    }
    
    for (int i = 0; i < K; i++) {
        cin >> P[i];
    }

    vector<long long> sum_c(K), sum_p(K);

    long long acum_c = 0, acum_p = 0;

    for (int i = 0; i < K; i++) {
        acum_c += C[i];
        sum_c[i] = acum_c;

        acum_p += P[i];
        sum_p[i] = acum_p;
    }

    long long ans = LLONG_MAX;
    for (int i = 0; i < K; i++) {
        if (sum_c[i] > 0) {
            ans = min(ans, sum_p[i] / sum_c[i]);
        }
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
