//http://www.usaco.org/index.php?page=viewproblem2&cpid=572

#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> b1;
    vector<int> b2;
    vector<int> b3;
    vector<int> cows;
    ifstream inputFile("./bcount.in");
    if (!inputFile) {
        cerr << "No se pudo abrir el archivo de entrada." << endl;
        return 1;
    }

    int n,q,aux;
    inputFile>>n>>q;
    for(int i=0; i<n; i++){
        inputFile>>aux;
        cows.push_back(aux);
    }

    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    b1.push_back(sum1);
    b2.push_back(sum2);
    b3.push_back(sum3);
    for(int i=0; i<n;i++){
        if(cows[i] == 1){
            sum1 ++;
        }else if(cows[i] == 2){
            sum2 ++;
        }else{
            sum3++;
        }
        b1.push_back(sum1);
        b2.push_back(sum2);
        b3.push_back(sum3);
    }
    ofstream outputFile("./bcount.out");
    if (!outputFile) {
        cerr << "No se pudo abrir el archivo de salida." << endl;
        return 1;
    }
    for(int i=0;i<q;i++){
        int l,r;
        inputFile>>l>>r;
        
        outputFile<<b1[r] - b1[l-1]<<" "<< b2[r] - b2[l-1]<<" "<<b3[r] - b3[l-1]<<endl;
    }
}