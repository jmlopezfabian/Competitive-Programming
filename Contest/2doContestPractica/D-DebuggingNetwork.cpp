#include <string>
#include <iostream>

using namespace std;

void solution(){
    string str;
    long long k;
    string num;
    string strnw;
    long long numint;
    cin>>str;
    cin>>k;

    int j = 0;

    //Verificar tamaño
    int suma_total = 0;
    for(int i=0; i<str.length(); i++){ //Recorre string codificado
        j = i;
        //Obtener digitos
        if(isdigit(str[i])){
            while(isdigit(str[j]) && j<str.length()){
                num += str[j];
                j++;
            }
            numint = stoll(num);
            suma_total += numint;
            num = {};
            i++;
        }else{
            suma_total += 1;
        }
        //cout<<strnw;
    }
    //cout<<suma_total;
    if(suma_total-1 > k){
        cout<<"unfeasible"<<endl;
        return;
    }
    num = {};
    numint = 0;
    j = 0;

    //Decodificar
    for(int i=0; i<str.length(); i++){ //Recorre string codificado
        j = i;
        //Obtener digitos
        if(isdigit(str[i])){
            while(isdigit(str[j]) && j<str.length()){
                num += str[j];
                j++;
            }
            numint = stoll(num);
            for(long long l=1; l<numint; l++){
                strnw += str[j];
            }
            num = {};
        }else{
            strnw += str[i];
        }
    }
    if(strnw.length() > k){
        cout<<"unfeasible"<<endl;
    }else{
        cout<<strnw<<endl;
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        solution();
    }

}