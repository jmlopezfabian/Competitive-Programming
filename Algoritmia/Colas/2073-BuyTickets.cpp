#include <bits/stdc++.h>
#include <queue>

using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>> fila;
        int contador = 0;
        for(int i=0; i<tickets.size(); i++){
            fila.push({tickets[i],i});
        }

        //while(!fila.empty()){
        //    cout<<fila.front().first<<" "<<fila.front().second<<endl;
        //    fila.pop();
        //}
        pair<int,int> persona_k = {tickets[k],k}; 

        while(!fila.empty()){
            if(fila.front().second == k && fila.front().first - 1 == 0){
                break;
            }else if(fila.front().first -1 != 0){
                fila.push({fila.front().first -1,fila.front().second});
                fila.pop();
            }else{
                fila.pop();
            }
            contador ++;
        }
        return contador+1;
    }
};

int main(int argv, char** argc){
    Solution solucion;
    vector<int> tickets = {2,3,4};
    int k = 1;

    cout<<solucion.timeRequiredToBuy(tickets,k);
}