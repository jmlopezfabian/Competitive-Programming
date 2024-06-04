#include <bits/stdc++.h>
using namespace std;

void solution() {
    int N, M;
    cin >> N >> M;

    vector<int> alfajores(N);
    vector<int> empleados(M);

    for (int &alfajor : alfajores) {
        cin >> alfajor;
    }

    for (int &empleado : empleados) {
        cin >> empleado;
    }

    multiset<int> conjuntoEmpleados;
    int minimoEmpleado = INT_MAX;

    for (const int &empleado : empleados) {
        if (empleado < minimoEmpleado) {
            minimoEmpleado = empleado;
            conjuntoEmpleados.insert(empleado);
        }
    }

    for (int &alfajor : alfajores) {
        while (true) {
            auto it = conjuntoEmpleados.upper_bound(alfajor);
            if (it == conjuntoEmpleados.begin()) {
                cout << alfajor << " ";
                break;
            }
            --it;
            alfajor %= *it;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
