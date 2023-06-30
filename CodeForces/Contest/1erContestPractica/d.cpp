#include <iostream>
using namespace std;
int minimo(int a,int b){
    return a>b?b:a;
}
int main() {
    int n;
    cin>>n;
    int izquierda[10001],derecha[10001];
    for(int i=0;i<n;i++){
        cin>>izquierda[i]>>derecha[i];
    }
    int cantidad_derecha_0=0, cantidad_derecha_1=0, cantidad_izquierda_0=0, cantidad_izquierda_1=0;
    for(int i=0;i<n;i++){
        if(derecha[i]==1){
            cantidad_derecha_1++;
        }else{
            cantidad_derecha_0++;
        }
    }
    int reduccion=minimo(cantidad_derecha_1,cantidad_derecha_0);
    for(int i=0;i<n;i++){
        if(izquierda[i]==1){
            cantidad_izquierda_1++;
        }else{
            cantidad_izquierda_0++;
        }
    }
    reduccion+=minimo(cantidad_izquierda_1,cantidad_izquierda_0);
    cout<<reduccion;
    return 0;
}