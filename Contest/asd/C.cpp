#include <bits/stdc++.h>

using namespace std;

void solution(){
    priority_queue<int,vector<int>, greater<int>> heap10;
    priority_queue<int,vector<int>, greater<int>> heap01;
    priority_queue<int,vector<int>, greater<int>> heap11;
    int n; cin>>n;
    int aux;
    int min;
    string skill;

    for(int i=0; i<n; i++){
        cin>>aux;
        cin>>skill;
        if(skill == "01"){
            heap01.push(aux);
        }else if(skill == "10"){
            heap10.push(aux);
        }
        else if(skill == "11"){
            heap11.push(aux);
        }
        else{
            continue;
        }
    }

    if((heap01.empty() || heap10.empty()) && !heap11.empty()){
        min = heap11.top();
    }else if((heap01.empty() || heap10.empty()) && heap11.empty()){
        min = -1;
    }else if(heap11.empty()){
        min = heap01.top() + heap10.top();
    }else{
        min = heap01.top() + heap10.top();
        if(min > heap11.top()){
            min = heap11.top();
        }
    }
    cout<<min<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
}