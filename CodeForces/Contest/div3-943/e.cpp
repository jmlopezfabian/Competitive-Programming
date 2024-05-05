#include <iostream>
#include <vector>
#include <algorithm> // Para std::min
#include <unordered_set>

using namespace std;

// Función para encontrar un ciclo y calcular su suma y longitud
void find_cycle(int start, vector<int>& p, vector<long long>& cycle_sum, vector<int>& cycle_length, vector<bool>& visited, vector<int>& a) {
    vector<int> path;
    int current = start;
    long long sum = 0;

    // Encuentra el ciclo y calcula la suma
    while (!visited[current]) {
        visited[current] = true;
        path.push_back(current);
        sum += a[current - 1];
        current = p[current - 1];
    }

    // Marca las posiciones del ciclo y establece longitud y suma
    for (int pos : path) {
        cycle_sum[pos] = sum;
        cycle_length[pos] = path.size();
    }
}

// Función para calcular la puntuación después de k turnos
string computeScore(int n, int k, int PB, int PS, vector<int>& p, vector<int>& a) {
    vector<int> cycle_length(n + 1, -1); // Para almacenar longitudes de ciclos
    vector<long long> cycle_sum(n + 1, 0); // Para almacenar sumas de ciclos
    vector<bool> visited(n + 1, false); // Para rastrear posiciones visitadas

    // Calcular ciclo y suma para posiciones iniciales
    if (cycle_length[PB] == -1) {
        find_cycle(PB, p, cycle_sum, cycle_length, visited, a);
    }

    if (cycle_length[PS] == -1) {
        find_cycle(PS, p, cycle_sum, cycle_length, visited, a);
    }

    // Calcula el puntaje después de k turnos
    auto calculate_final_score = [k, &p](int start, vector<long long>& cycle_sum, vector<int>& cycle_length, vector<int>& a) {
        int c_len = cycle_length[start];
        long long full_cycles = k / c_len;
        long long remaining_steps = k % c_len;
        long long cycle_total = cycle_sum[start];
        long long score = full_cycles * cycle_total;

        // Calcular puntuación adicional para pasos residuales
        int current = start;
        for (int i = 0; i < remaining_steps; ++i) {
            score += a[current - 1];
            current = p[current - 1];
        }

        return score;
    };

    long long bodyaScore = calculate_final_score(PB, cycle_sum, cycle_length, a);
    long long sashaScore = calculate_final_score(PS, cycle_sum, cycle_length, a);

    // Comparar puntuaciones y determinar el ganador
    if (bodyaScore > sashaScore) {
        return "Bodya";
    } else if (sashaScore > bodyaScore) {
        return "Sasha";
    } else {
        return "Draw";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, PB, PS;
        cin >> n >> k >> PB >> PS;

        vector<int> p(n);
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << computeScore(n, k, PB, PS, p, a) << endl;
    }

    return 0;
}
