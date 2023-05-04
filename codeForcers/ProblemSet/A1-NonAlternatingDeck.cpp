#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int Alice = 0;
        int Bob = 0;
        int cantidad_cartas;
        int cartas_tomar = 1;
        bool flag = true;

        cin>>cantidad_cartas;
        if(cartas_tomar == 1){
            Alice = Alice + cartas_tomar;
            cantidad_cartas -= 1;
            flag = false;
            cartas_tomar ++;
        }
        while(cantidad_cartas != 0 and cantidad_cartas>=cartas_tomar){
            if(flag == true){
                Alice += cartas_tomar;
                cantidad_cartas -= cartas_tomar;
            }
            else if(flag == false){
                Bob += cartas_tomar;
                cantidad_cartas -= cartas_tomar;
            }
            cartas_tomar++;

            if(cartas_tomar % 2 == 0 and cartas_tomar != 2){
                flag = !flag;
            }
        }

        if(cantidad_cartas != 0){
            if(flag == true){
                Alice += cantidad_cartas;
            }else{
                Bob +=  cantidad_cartas;
            }
        }
        printf("%d %d\n",Alice,Bob);
    }
    return 0;
}