//link: ttps://codeforces.com/contest/1760/problem/C

#include <bits/stdc++.h>

using namespace std;

void sort(int *arreglo, int tam);
void mezcla(int *arrIzq, int tamIzq, int *arrDer, int tamDer, int* arreglo);


void sort(int *arreglo, int tam){
    if(tam>1){
        int i,j,k;
        int mitad=tam/2;
        int arrIzq[mitad];
        int arrDer[tam-mitad];
        for(i=0, k=0; i<mitad; i++, k++){
            arrIzq[i]=arreglo[k];
        }
        for(j=0; j< (tam-mitad); j++, k++){
            arrDer[j]=arreglo[k];
        }
        sort(arrIzq,mitad);
        sort(arrDer,tam-mitad);
        mezcla(arrIzq,mitad, arrDer,tam-mitad,arreglo);
    }
}

void mezcla(int *arrIzq, int tamIzq, int *arrDer, int tamDer, int* arreglo){
    int i=0,j=0,k=0;
    while(i<tamIzq && j<tamDer){
        if(arrIzq[i]<arrDer[j]){
            arreglo[k]=arrIzq[i];
            i++;   
        } else{
            arreglo[k]=arrDer[j];
            j++;  
        }
        k++;
    }
    while(j<tamDer){
        arreglo[k]=arrDer[j];
        j++;
        k++;
    }
    while(i<tamIzq){
        arreglo[k]=arrIzq[i];
        i++;
        k++;
    }
}


int main(int argc, char const *argv[]){
    int t,n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        int arr[n];
        int arr_aux[n];
        for(int j=0; j<n; j++){
            cin>>arr[j];
        }
        for(int j=0; j<n; j++){
            arr_aux[j] = arr[j];
        }
        sort(arr_aux,n);
        int max;

        for(int k=0; k<n; k++){
            max = arr_aux[n-1];
            if(arr[k] == max){
                max = arr_aux[n-2];
                cout<<arr[k] - max<<" ";
            }else{
                cout<<arr[k] - max<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}