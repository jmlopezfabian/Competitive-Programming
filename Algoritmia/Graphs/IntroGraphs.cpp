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

void dfs(int i, int j, int **matriz, bool **visit){
    //Dfs para una matriz de adyacencia.
    cout<<"Current Node: "<<matriz[i][j];
    visit[i][j] = true;
    
    for(int k = 0; k<)

}

int main(){

    //Implementación de una matriz de adyacencia.
    int n = 3; //-> numero de vertices.
    int matrizAdj[n][n];
    

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n;j++){
            cin>>matrizAdj[i][j];
        }
    }

    bool visit[n][n];

}
