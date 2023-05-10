#include <bits/stdc++.h>
#include <stack>

using namespace std;

class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        //Meter un elemento a la cola
        if(s2.size() == 0){
            s1.push(x);
        }else{
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
            s1.push(x);
        }
    }
    
    int pop() {
        int aux = 0;
        if(s1.empty()){
            aux = s2.top();
            s2.pop();
        }else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            aux =  s2.top();
            s2.pop();
        }
        
        return aux;
    }
    
    int peek() {
        if(s1.empty()){
            return s2.top();
        }else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            return s2.top();
        }
        
    }
    
    bool empty() {
        int suma = s1.size() + s2.size();
        if(suma == 0){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    MyQueue cola;
    cola.push(2);
    cola.push(3);
    cola.push(4);

    int cabeza = cola.peek();
    cout<<cabeza<<endl;
    
    cout<<cola.pop();
    cout<<cola.pop();
    cout<<cola.pop();
//
    //while(!cola.empty()){
    //    cola.peek();
    //    cola.
    //}
}