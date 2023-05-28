#include <bits/stdc++.h>

using namespace std;



/*
FORMAS DE REPRESENTACIÓN DE GRAFOS


---Matriz de adyacencia---

Es un arreglo bidimensional que indica cuales son las aritas que el grafo tiene. Con esta representación
podemos ver muy rápidamente si el grafo contiene a determinada arista.

int matrizAdj[N][N];

Si hay una arista (u,v) entonces matrizAdj[u][v] = 1, de lo contrario matrizAdj[u][v] = 0.

Si el grafo es poderado, podemos almacenar el peso de cada arista en la matriz de adyacencia, en caso de que no exista conexion
el valor sera -1.

//Ejemplo
     1 2 3

1    0 1 1
2    1 0 1   
3    1 1 1

La cantidad de memoria necesaria para implementar una matriz de adyacencia es o(|v|^2)


RECORRIDOS

---DFS: Busqueda en profundidad (Depth - First Search)---

El recorrido inicia en un nodo y visita a todos los nodos que son alcanzables desde el nodo inicial. El algoritmo siempre siguen un camino
del grafo mientras siga encontrando nuevos nodos. Cuando ya no puede seguir por un camino regresa a nodos anteriores para explorarlos
por DFS.
*/



void dfs(int s, bool visited[], vector<int> adj[]){
    if(visited[s] == true){ //Si ya lo visitamos
        return;
    }
    visited[s] = true;
    //Procees node s
    cout<<"Current node: "<<s<<endl;
    for(auto u: adj[s]){
        dfs(u, visited, adj);
    }
}

int main(){
    //Adjaceny list representation
    int n = 4; //Nodes
    vector<int> adj[n];

    adj[0].push_back(1);
    adj[0].push_back(3);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(0);
    adj[3].push_back(1);
    adj[3].push_back(2);

    //Imprimir los vecinos de cada nodo.
    for(int i=0; i<n; i++){
        cout<<i<<" - ";
        for(int j=0; j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<"\n";
    }

    //DFS en una adjaceny list
    bool visited[n];
    dfs(0,visited, adj);
}