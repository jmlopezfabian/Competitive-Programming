#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    unordered_map<string, string> ahead; // mapa para guardar quién está delante de quién
    
    // Lectura de las n-1 líneas
    for (int i = 0; i < n - 1; ++i) {
        string current, ahead_of_current;
        cin >> current >> ahead_of_current;
        ahead[ahead_of_current] = current; // current está delante de ahead_of_current en la fila rara
    }
    
    // Encontrar la primera persona, que no está delante de nadie
    string last_person;
    for (int i = 0; i < n; ++i) {
        string person = to_string(i);
        if (ahead.find(person) == ahead.end()) {
            last_person = person;
            break;
        }
    }
    
    // Construir la fila original
    vector<string> original_order;
    string current_person = last_person;
    while (!current_person.empty()) {
        original_order.push_back(current_person);
        current_person = ahead[current_person];
    }
    
    // Imprimir la fila original en orden inverso
    for (auto it = original_order.rbegin(); it != original_order.rend(); ++it) {
        cout << *it << endl;
    }
}
