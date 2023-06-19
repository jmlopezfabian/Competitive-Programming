#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> problemasLara(n);
    for (int i = 0; i < n; i++) {
        cin >> problemasLara[i];
    }

    vector<string> problemasEnya(m);
    for (int i = 0; i < m; i++) {
        cin >> problemasEnya[i];
    }

    int turnos = min(n, m);

    for (int i = 0; i < turnos; i++) {
        //cout << problemasLara[i] << endl;
        //cout << problemasEnya[i] << endl;

        if (i == turnos - 1) {
            cout << "YES" << endl;
            return 0;
        }
    }

    if (n == m) {
        cout << "NO" << endl;
    }
    else if (n > m) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}