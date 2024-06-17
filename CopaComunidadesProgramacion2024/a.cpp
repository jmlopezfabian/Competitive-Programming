#include <bits/stdc++.h>

using namespace std;

int solution(const std::string& eventos) {
    int personasActuales = 0, maximoPersonas = 0;

    for (const char& evento : eventos) {
        if (evento == '+') {
            ++personasActuales;
        } else if (evento == '-') {
            if (personasActuales > 0) {
                --personasActuales;
            } else {
                ++maximoPersonas;
            }
        }
        maximoPersonas = std::max(maximoPersonas, personasActuales);
    }

    return maximoPersonas;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string entrada;
    while (std::getline(std::cin, entrada)) {
        if (!entrada.empty()) {
            std::cout << solution(entrada) << std::endl;
        }
    }
}