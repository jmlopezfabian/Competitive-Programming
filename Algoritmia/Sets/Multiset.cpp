#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> miMultiset;

    // Insertar elementos en el multiconjunto
    miMultiset.insert(3);
    miMultiset.insert(1);
    miMultiset.insert(4);
    miMultiset.insert(2);
    miMultiset.insert(3); // Se insertará, ya que los multiconjuntos permiten duplicados

    // Recorrer e imprimir elementos en orden ascendente
    for (int num : miMultiset) {
        cout << num << " ";
    }
    // Salida: 1 2 3 3 4

    //Buscar un elemento
    cout<<"\n";
    if(miMultiset.find(2) != miMultiset.end()){
        cout<<"El 2 está en el multiset";
    }else{
        cout<<"El 2 no está en el multiset";
    }

    // Contar cuántas veces aparece un elemento en el multiconjunto
    int elemento = 3;
    int conteo = miMultiset.count(elemento);
    cout << "\nEl elemento " << elemento << " aparece " << conteo << " veces en el multiset." << std::endl;

    return 0;
}