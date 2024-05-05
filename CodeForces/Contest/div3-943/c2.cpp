#include <bits/stdc++.h>


void solve() {
    int n;
    std::cin >> n;
    std::vector<int> x(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        std::cin >> x[i];
    }

    std::vector<int> a;
    a.push_back(1000000); 


    for (int i = 0; i < n - 1; ++i) {
        a.push_back(a[i] + x[i]);  
    }

    // Imprimir el resultado
    for (int i = 0; i < n; ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
