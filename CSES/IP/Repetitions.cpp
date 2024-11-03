//https://cses.fi/problemset/task/1069
#include <bits/stdc++.h>

using namespace std;

int main(){
    string dna;
    cin>>dna;

    int longest = 0;
    int count = 0;

    for(int i=0; i<dna.length() - 1; i++){
        if(dna[i] == dna[i + 1]){
            count ++;
            longest = max(count,longest);
        }else{
            count = 0;
        }
    }
    cout<<longest + 1<<endl;
}