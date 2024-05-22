#include <bits/stdc++.h>

using namespace std;

int horario(int n, int posicion, int pasos) {
    return (posicion + pasos - 1) % n + 1;
}

int antihorario(int n, int posicion, int pasos) {
    int resultado = (posicion - pasos - 1) % n;
    if (resultado < 0) {
        resultado += n;
    }
    return resultado + 1;
}

/*

void solution(){
    int n,m,x; cin>>n>>m>>x;

    queue<int> actuales;
    actuales.push(x);

    while(m--){
        int pasos, actual; cin>>pasos;
        char instruccion;
        cin>>instruccion;
        vector<int> siguientes;
        if(instruccion == '1'){
            //Antihorario
            while(!actuales.empty()){
                actual = actuales.front();
                actuales.pop();
                actual = antihorario(n,actual,pasos);
                siguientes.push_back(actual);
            }
            for(auto it: siguientes){
                actuales.push(it);
            }
        }
        else if(instruccion == '0'){
            //Horario
            while(!actuales.empty()){
                actual = actuales.front();
                actuales.pop();
                actual = horario(n,actual,pasos);
                siguientes.push_back(actual);
            }
            for(auto it: siguientes){
                actuales.push(it);
            }

        }else{
            while(!actuales.empty()){
                actual = actuales.front();
                actuales.pop();

                int actual1 = antihorario(n,actual,pasos);
                int actual2 = horario(n,actual,pasos);

                siguientes.push_back(actual1);
                siguientes.push_back(actual2);
            }
            for(auto it: siguientes){
                actuales.push(it);
            }
        }
    }

    //cout<<actuales.size()<<endl;
    set<int> unicos;

    while(!actuales.empty()){
        unicos.insert(actuales.front());
        actuales.pop();
    }
    cout<<unicos.size()<<endl;
    for(auto it: unicos){
        cout<<it<<" ";
    }
    cout<<endl;
}

*/

void solution() {
    int n, m, x;
    cin >> n >> m >> x;

    unordered_set<int> posibles_actuales;
    posibles_actuales.insert(x);

    while (m--) {
        int pasos;
        char instruccion;
        cin >> pasos >> instruccion;

        unordered_set<int> nuevos_posibles;
        
        for (int actual : posibles_actuales) {
            if (instruccion == '1') {
                // Antihorario
                int nuevo = antihorario(n, actual, pasos);
                nuevos_posibles.insert(nuevo);
            } else if (instruccion == '0') {
                // Horario
                int nuevo = horario(n, actual, pasos);
                nuevos_posibles.insert(nuevo);
            } else {
                // Ambas direcciones
                int nuevo1 = antihorario(n, actual, pasos);
                int nuevo2 = horario(n, actual, pasos);
                nuevos_posibles.insert(nuevo1);
                nuevos_posibles.insert(nuevo2);
            }
        }

        posibles_actuales = move(nuevos_posibles);
    }

    vector<int> resultados(posibles_actuales.begin(), posibles_actuales.end());
    sort(resultados.begin(), resultados.end());

    cout << resultados.size() << endl;
    for (int pos : resultados) {
        cout << pos << " ";
    }
    cout << endl;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    int t; cin>>t;
    while(t--){
        solution();
    }
}
