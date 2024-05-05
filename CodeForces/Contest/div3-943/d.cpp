#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    std::cin >> t;  // Número de casos de prueba

    std::vector<int> testCases(t);
    for (int i = 0; i < t; i++) {
        std::cin >> testCases[i];  // Valor de 'n' para cada caso de prueba
    }

    for (int i = 0; i < t; i++) {
        int n = testCases[i];

        // Para maximizar el conjunto de distancias de Manhattan, seleccionamos puntos a lo largo de la diagonal
        std::vector<std::pair<int, int>> points;
        for (int j = 1; j <= n; j++) {
            points.push_back({j, j});  // Puntos a lo largo de la diagonal
        }

        // Imprimir los puntos para cada caso de prueba
        for (const auto& point : points) {
            std::cout << point.first << " " << point.second << "\n";
        }

        // No es necesario un salto de línea extra entre casos de prueba
        cout<<endl;
    }

    return 0;
}
