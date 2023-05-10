#include <bits/stdc++.h>

using namespace std;

int main(){
    string s = "aab";
    char chars[255] = {};
    int tams[s.length()] = {};
    //Empezamos con una ventana de tamaño 1
    //Cada vez que aumentemos el tamaño de la cadena revisamos si el elemento nuevo es diferente
    int l = 0;
    int r = 0;
    int tam = 0;
    int contador = 0;

    while( l < s.length() && r < s.length()){
        if(chars[(int) s[r]] != 1){
            chars[(int)s[r]] = 1;
            //cout<<"A: "<<chars[(int)s[r]];
            r++;
            tam++;
        }else{
            l++;
            r = l;
            tams[contador] = tam;
            tam = 0;
            contador++;
            for(int i=0;i<255;i++){
                chars[i] = 0;
            }
        }
    }
    if(tams[0] == 0){
        tams[0] = tam;
    }

    for(int i=0; i< s.length(); i++){
        cout<<tams[i];
    }
}