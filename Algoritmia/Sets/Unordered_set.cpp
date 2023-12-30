#include <bits/stdc++.h>

using namespace std;

int main(){
    unordered_set<char> miSet;
    
    miSet.insert('z');
    miSet.insert('a');
    miSet.insert('f');
    miSet.insert('g');
    miSet.insert('a'); //No se insertará


    //Recorrer e imprimir elementos
    for(auto num: miSet){
        cout<<num<<" "; 
    }
    //Salida: g f a z

    cout<<"\n";
    //Buscar un elemento en el conjunto
    if(miSet.find('g') != miSet.end()){
        cout<<"'g' está en el conjunto"<<endl;
    }else{
        cout<<"'g' no está en el conjutno"<<endl;
    }

    //Tamaño del conjunto
    cout<<"Tamaño del conjunto: "<<miSet.size()<<endl;
}