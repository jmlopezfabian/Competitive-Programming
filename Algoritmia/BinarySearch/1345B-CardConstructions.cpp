//https://codeforces.com/problemset/problem/1345/B

#include<bits/stdc++.h>

using namespace std;

int solution(){
    int contador = 0;
    long long n;
    long long new_n;
    int h;
    double h_max; 
    cin>>n;
    if(n < 2){
        return 0;
    }
    else if(n == 2){
        return 1;   
    }
    while( n >= 2){
        h_max = (-1+sqrt(1+24*n))/6;
        h_max = floor(h_max);

        new_n =  ((3*pow(h_max,2))/2) + (h_max/2);
        //new_n = ((3/2) * pow(h_max,2)) + h_max/2;
        n = n - new_n;
        contador++;
    }
    return contador;
}


int main(){
    int t; cin>>t;
    while(t--){
        cout<<solution()<<endl;
    }
    //cout<<solution()<<endl;
}