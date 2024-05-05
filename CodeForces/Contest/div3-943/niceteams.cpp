#include <bits/stdc++.h>

using namespace std;

int maxPairs(vector<int> skillLevel, int minDiff) {
    int n = skillLevel.size();
    map<int, int> bucket;
    sort(skillLevel.begin(), skillLevel.end());
    
    // Recuento de elementos por valor.
    for (auto skill : skillLevel) {
        bucket[skill]++;
    }

    int count = 0;

    // Iterar sobre el mapa de elementos.
    for (auto it1 = bucket.begin(); it1 != bucket.end(); ++it1) {
        for (auto it2 = next(it1); it2 != bucket.end(); ++it2) {
            if (abs(it1->first - it2->first) >= minDiff) { // Uso de abs para asegurar diferencia positiva
                // Verificar que ambos tengan elementos suficientes para formar un par.
                if (it1->second > 0 && it2->second > 0) {
                    count++;
                    it1->second--;  // Disminuir el recuento.
                    it2->second--;
                }
            }
        }
    }

    return count;
}

int main() {
    vector<int> skillLevel = {1, 1, 2, 3, 4, 5};
    int minDiff = 3;
    cout << maxPairs(skillLevel, minDiff) << endl;
    return 0;
}
