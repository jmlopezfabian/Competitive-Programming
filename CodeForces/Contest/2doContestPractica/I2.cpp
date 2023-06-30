#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr;
    int aux;
    int min = 0;

    //Suma todos los elementos
    for(int i=0; i<3; i++){
        cin>>aux;
        min += aux;
        arr.push_back(aux);
    }
    
    if(min>500){
        min -= 100;
    }

    //Comprar elementos individuales
    int suma_individual = 0;
    for(int i=0; i<3; i++){
        if(arr[i] >= 500){
            suma_individual += arr[i] - 100;
        }else{
            suma_individual += arr[i];
        }
    }

    if(suma_individual < min){
        min = suma_individual;
    }
    
    //Suma primer-segundo elemento
    int suma_primer_segundo = arr[0] + arr[1];
    if(suma_primer_segundo >= 500){
        suma_primer_segundo -= 100;
    }
    if(arr[2] >= 500){
        suma_primer_segundo += arr[2]-100;
    }else{
        suma_primer_segundo += arr[2];
    }

    if(suma_primer_segundo < min){
        min = suma_primer_segundo;
    }

    //Suma tercer-segundo elemento
    int suma_tercer_segundo = arr[1] + arr[2];
    if(suma_tercer_segundo >= 500){
        suma_tercer_segundo -= 100;
    }
    if(arr[0] >= 500){
        suma_tercer_segundo += arr[0]-100;
    }else{
        suma_tercer_segundo += arr[0];
    }

    if(suma_tercer_segundo < min){
        min = suma_tercer_segundo;
    }

    //Suma primer-tercer elemento
    int suma_primer_tercer = arr[0] + arr[2];
    if(suma_primer_tercer >= 500){
        suma_primer_tercer -= 100;
    }
    if(arr[1] >= 500){
        suma_primer_tercer += arr[1]-100;
    }else{
        suma_primer_tercer += arr[1];
    }

    if(suma_primer_tercer < min){
        min = suma_primer_tercer;
    }

    cout<<min<<endl;
}