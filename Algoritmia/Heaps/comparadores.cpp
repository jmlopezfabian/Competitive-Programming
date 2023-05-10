#include <bits/stdc++.h>

using namespace std;

class Comparator{
    public:
    bool operator()(const int &a, const int &b){
        return a < b;
    }
};

int main(){
    priority_queue<int,vector<int>, Comparator> Minheap;

    Minheap.push(5);
    Minheap.push(5);
    Minheap.push(5);
    Minheap.push(5);
    Minheap.push(-8);
    Minheap.push(100);
    Minheap.push(25);

    while(!Minheap.empty()){
        cout<<Minheap.top()<<endl;
        Minheap.pop();
    }
}