#include <bits/stdc++.h>

using namespace std;

int comp1(int x){
    return ~x;
}

int comp2(int x){
    return comp1(x) + 1;
}

int isPowerOfTwo(int x){
    return !(x&(x-1));
}
int ismult2(int x){
    return !(x&1);
}
int numeroBitsEncendidos(int x){
    int res = 0;
    while(x){
        if(x&1) res++;
        x>>= 1;
    }
    return res;
}

int giveMeBit(int num,int pos){
    return num &(1<<(pos-1));
}

int clearBit(int num,int pos){
    num&(~(1<<pos));
}

int giveMeRank(int pos1, int pos2){
    int pos1 = (1<<(pos1+1)) + 1;
    cout<<pos1<<endl;
}

//int numeroBitsEncendidosRecursive(int x){
//    if(x == 0) return 0;
//    
//}

int main(){
    //int n = INT_MAX;
    //n ++;
    //if(n == INT_MIN){
    //    cout<<"YES";
    //}

    //int n;
    //cin>>n;
    //n = comp2(n);
    //cout<<n<<endl;
    
    //int a = 128;
    //cout<<isPowerOfTwo(a);
    //cout<<ismult2(8);

    int n,m;
    cin>>n;
    //cin>>m;
    //Siempre utilizar parentesis cuando trabajemos con bits
    //and -> &
    //or -> |
    //xor -> ^
    //cout<<(n&m)<<endl;
    //cout<<(n|m)<<endl;
    //cout<<(n^m)<<endl;
    //cout<<(!n)<<endl;

    cout<<numeroBitsEncendidos(n);
    //Toda valor distinto de 0 es true
}