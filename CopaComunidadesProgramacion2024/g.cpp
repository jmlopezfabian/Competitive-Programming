#include <bits/stdc++.h>

using namespace std;

int calcularPuntaje(string palabra) {
    int puntaje = 0;
    
    for (auto c : palabra) {
        if (isdigit(c)) {
            puntaje += c - '0';
        } else if (islower(c)) {
            puntaje += 10 + (c - 'a');
        } else if (isupper(c)) {
            puntaje += 2 * (10 + (tolower(c) - 'a'));
        }
    }
    
    return puntaje;
}

void solution() {
    string ana, carolina;
    cin >> ana >> carolina;
    
    int puntajeAna = calcularPuntaje(ana);
    int puntajeCarolina = calcularPuntaje(carolina);
    
    if (puntajeAna > puntajeCarolina)
        cout << "Ana " << puntajeAna << endl;
    else
        cout << "Carolina " << puntajeCarolina << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}