#include <bits/stdc++.h>

using namespace std;

int main() {
    int monedas;
    cin >> monedas;

    vector<int> monedasVec(monedas);
    for (int i = 0; i < monedas; i++) {
        cin >> monedasVec[i];
    }

    sort(monedasVec.begin(), monedasVec.end());

    int suma_total = accumulate(monedasVec.begin(), monedasVec.end(), 0);

    int suma_act = 0;
    int cantidad = 0;
    for(int i = monedasVec.size() - 1; i >= 0; i--){
        suma_act += monedasVec[i];
        cantidad += 1;
        if(suma_act > suma_total - suma_act){
            cout<<cantidad<<endl;
            return 0;
        }
    }
}
