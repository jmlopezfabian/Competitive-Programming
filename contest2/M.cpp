#include <bits/stdc++.h>

using namespace std;

void solution() {
    int N;
    double T;
    cin >> N >> T;

    vector<double> prioritarios;
    vector<double> no_prioritarios;

    for (int i = 0; i < N; ++i) {
        char C;
        double X;
        cin >> C >> X;
        if (C == 'P') {
            prioritarios.push_back(X);
        } else {
            no_prioritarios.push_back(X);
        }
    }

    double tiempo_total = 0.0;

    while (!prioritarios.empty() || !no_prioritarios.empty()) {
        double T_p = T * 0.75;
        double T_n = T * 0.25;

        double vel_p_cada = prioritarios.empty() ? 0 : T_p / prioritarios.size();
        double vel_n_cada = no_prioritarios.empty() ? 0 : T_n / no_prioritarios.size();

        double tiempo_minimo = numeric_limits<double>::max();
        if (!prioritarios.empty()) {
            for (auto tamano : prioritarios) {
                tiempo_minimo = min(tiempo_minimo, tamano / vel_p_cada);
            }
        }
        if (!no_prioritarios.empty()) {
            for (auto tamano : no_prioritarios) {
                tiempo_minimo = min(tiempo_minimo, tamano / vel_n_cada);
            }
        }

        tiempo_total += tiempo_minimo;

        vector<double> nuevos_prioritarios;
        for (auto tamano : prioritarios) {
            double nuevo_tamano = tamano - vel_p_cada * tiempo_minimo;
            if (nuevo_tamano > 1e-6) {
                nuevos_prioritarios.push_back(nuevo_tamano);
            }
        }
        prioritarios = nuevos_prioritarios;

        vector<double> nuevos_no_prioritarios;
        for (auto tamano : no_prioritarios) {
            double nuevo_tamano = tamano - vel_n_cada * tiempo_minimo;
            if (nuevo_tamano > 1e-6) {
                nuevos_no_prioritarios.push_back(nuevo_tamano);
            }
        }
        no_prioritarios = nuevos_no_prioritarios;

        if (prioritarios.empty() && !no_prioritarios.empty()) {
            T_p = 0;
            T_n = T;
        } else if (!prioritarios.empty() && no_prioritarios.empty()) {
            T_p = T;
            T_n = 0;
        }
    }

    cout << fixed << setprecision(0) << tiempo_total << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}