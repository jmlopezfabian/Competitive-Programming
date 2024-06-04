#include <iostream>
#include <vector>
using namespace std;

void solution() {
    int N, M;
    cin >> N >> M;

    vector<long long> alfajores(N);
    vector<long long> empleados(M);

    for(int i = 0; i < N; i++) {
        cin >> alfajores[i];
    }

    vector<long long> noCero;
    for(int i = 0; i < M; i++) {
        cin >> empleados[i];
        if(empleados[i] != 0)
            noCero.push_back(empleados[i]);
    }

    for(int i = 0; i < N; i++) {
        long long restantes = alfajores[i] % noCero[0];
        for(int j = 1; j < noCero.size(); j++) {
            restantes %= noCero[j];
        }
        cout << restantes << " ";
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}