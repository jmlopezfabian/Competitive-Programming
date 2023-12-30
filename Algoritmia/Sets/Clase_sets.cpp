#include <bits/stdc++.h>

using namespace std;

int main(){
    set<int> miSet;
    
    miSet.insert(3);
    miSet.insert(1);
    miSet.insert(4);
    miSet.insert(2);
    miSet.insert(3); //No se insertará

    //Recorrer e imprimir elementos
    for(auto num: miSet){
        cout<<num<<" "; 
    }
    //Salida: 1 2 3 4

    cout<<"\n";
    //Buscar un elemento en el conjunto
    if(miSet.find(2) != miSet.end()){
        cout<<"El 2 está en el conjunto"<<endl;
    }else{
        cout<<"No está en el conjutno"<<endl;
    }

    //Tamaño del conjunto
    cout<<"Tamaño del conjunto: "<<miSet.size()<<endl;
}

