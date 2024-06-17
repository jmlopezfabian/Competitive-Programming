#include <bits/stdc++.h>

using namespace std;

void solution(string entrada){
    int n = stoi(entrada);
    
    long long cuadrados = 0;
    long long rectangulos = 0;
    
    for(int k = 1; k <= n; ++k){
        cuadrados += (long long)(n - k + 1) * (n - k + 1);
    }
    
    rectangulos = (long long)n * (n + 1) / 2 * n * (n + 1) / 2;
    
    cout << cuadrados << " " << rectangulos << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string entrada;
    while (getline(cin, entrada)) {
        if (!entrada.empty()) {
            solution(entrada);
        }
    }
}
