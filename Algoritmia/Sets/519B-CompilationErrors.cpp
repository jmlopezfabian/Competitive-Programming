#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; cin>>n;
    multiset<int> set1;
    multiset<int> set2;
    multiset<int> set3;

    int aux;

    for(int i=0; i<n; i++){
        cin>>aux;
        set1.insert(aux);
    }
    for(int i=0; i<n-1; i++){
        cin>>aux;
        set2.insert(aux);
    }
    for(int i=0; i<n-2; i++){
        cin>>aux;
        set3.insert(aux);
    }
    auto it1 = set1.begin();
    auto it2 = set3.begin();
    int contador = 0;

    while(it1 != set1.end() && contador < 2){
        if(*it1 != *it2){
            cout<<*it1<<endl;
            contador++;
        }
        it1++;
        it2++;
    }
}