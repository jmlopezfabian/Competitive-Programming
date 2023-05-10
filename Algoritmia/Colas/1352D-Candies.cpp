#include<bits/stdc++.h>

using namespace std;

void solution(){
    deque<int> cola;
    int n;
    int aux;

    cin>>n;
    int contador = 0;
    int sum_alicia = 0, sum_bob = 0;
    int suma_aux = 0;
    int dulce_actual = 0;
    bool turno = false; //flase -> Alicia   true -> Bob
    int sum_actual = 0;

    for(int i=0;i<n;i++){
        cin>>aux;
        cola.push_back(aux);
    }

    while(!cola.empty()){
        sum_actual = 0;
        suma_aux = 0;
        if(!turno){ //Turno alicia
            if(sum_alicia == 0){//Primer turno
                sum_alicia += cola.front();
                dulce_actual = cola.front();
                cola.pop_front();
            }else{ //NO es primer turno;
                while(sum_actual <= dulce_actual && !cola.empty()){
                    sum_actual += cola.front();
                    sum_alicia += cola.front();
                    dulce_actual = cola.front();
                    aux = cola.front();
                    cola.pop_front();
                }
                dulce_actual = sum_actual;
            }
            turno = !turno;
        }else{ //Turno Bob
            while(sum_actual <= dulce_actual && !cola.empty()){
                    sum_actual += cola.back();
                    sum_bob += cola.back();
                    aux = cola.back();
                    cola.pop_back();
                }
                dulce_actual = sum_actual;

                turno = !turno;
            }
            contador ++;  
        }
    cout<<contador<<" "<<sum_alicia<<" "<<" "<<sum_bob;
}
int main(){
    int t;
    //cin>>t;
    //while(t>0){
    //    solution();
    //    t--;
    //}

    solution();
}
