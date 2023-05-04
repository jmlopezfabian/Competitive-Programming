#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(int argc, char** argv){
    char string1[100];
    int x[2];
    int aux;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cin>>aux;
            if(aux == 1){
                x[0] = i;
                x[1] = j;
                break;
            }
        }
    }
    cout<<abs(3-x[0]) + abs(3-x[1]);
}