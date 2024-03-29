#include <iostream>
#include <vector>

using namespace std;

void solution() {
    int n;
    cin >> n;
    
    vector<vector<char>> grid(n * 2, vector<char>(n * 2));

    vector<char> aux1(n * 2, '.');
    vector<char> aux2(n * 2, '.');

    // Construir patrón aux1
    aux1[0] = '#';
    aux1[1] = '#';
    for (int i = 0; i + 2 < 2 * n; i++) {
        if (aux1[i] == '#') {
            aux1[i + 2] = '.';
        } else
            aux1[i + 2] = '#';
    }

    // Construir patrón aux2 como complemento de aux1
    for (int i = 0; i < n * 2; i++) {
        aux2[i] = (aux1[i] == '.') ? '#' : '.';
    }

    // Asignar patrones a grid
    for (int i = 0; i < n * 2; i += 2) {
        if (i % 4 == 0) {
            grid[i] = aux1;
            grid[i + 1] = aux1;
        } else {
            grid[i] = aux2;
            grid[i + 1] = aux2;
        }
    }

    // Imprimir grid
    for (int i = 0; i < n * 2; i++) {
        for (int j = 0; j < n * 2; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
