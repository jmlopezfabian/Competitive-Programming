//link: https://codeforces.com/problemset/problem/489/B

#include <bits/stdc++.h>

using namespace std;

int main(){
    int num_boys, num_girls,contador = 0;

    cin>>num_boys;
    vector<int> boys(num_boys);
    for(int i=0; i<num_boys; i++){
        cin>>boys[i];
    }

    cin>>num_girls;
    vector<int> girls(num_girls);
    for(int i=0; i<num_girls; i++){
        cin>>girls[i];
    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    //for(int i=0; i<num_boys; i++){
    //    cout<<boys[i]<<" ";
    //}
    //for(int j=0; j<num_girls;j++){
    //    cout<<girls[j]<<" ";
    //}
    int i=0, j = 0;
    while(i<num_boys && j<num_girls){
        if(num_boys>num_girls){
            for(j=i; j<num_boys;j++){
                    if(boys[i] ==girls[j]){
                        contador++;
                    }
                }
            }else{
                for(i=j; i<num_girls;i++){
                    if(boys[i] == girls[j]){
                        contador++;
                    }
                }
            }
            i++;
        }
    cout<<contador;

}