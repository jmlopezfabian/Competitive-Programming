#include <bits/stdc++.h>

using namespace std;

vector<int> rotLeft(vector<int> a, int d) {
    for(int i=0; i<d; i++){
        int aux = a[0];
        for(int j=1; j<a.size(); j++){
            a[j-1] = a[j];
        }
        a[a.size()-1] = aux;
    }
    return a;
}

int main(){

    vector<int> a = {1,2,3,4,5};
    rotLeft(a,4);
}