#include <bits/stdc++.h>

using namespace std;

int main(){
    priority_queue<int> heap; //MaxHeap

    heap.push(5);
    heap.push(5);
    heap.push(5);
    heap.push(5);
    heap.push(-8);
    heap.push(100);
    heap.push(25);

    while(!heap.empty()){
        cout<<heap.top()<<endl;
        heap.pop();
    }

    cout<<"\n";
    priority_queue<int,vector<int>, greater<int>> Minheap;

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
    

    //Comparadores custom

}