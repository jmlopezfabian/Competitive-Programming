#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    vector<int> array(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    long long sumaPrefijo = 0;
    unordered_set<long long> elementos;
    int contadorPrefijosBuenos = 0;
    
    for (int i = 0; i < n; ++i) {
        sumaPrefijo += array[i];
        elementos.insert(array[i]);
        
        if (sumaPrefijo % 2 == 0 && elementos.find(sumaPrefijo / 2) != elementos.end()) {
            contadorPrefijosBuenos++;
        }
    }
    
    cout << contadorPrefijosBuenos << endl;
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
