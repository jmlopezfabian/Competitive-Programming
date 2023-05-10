//Link: https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-multiplication/?purpose=login&source=problem-page&update=github

#include <bits/stdc++.h>

using namespace std;

int main(){
    priority_queue<int> MaxHeap;
    long long n; cin>>n;
    long long currentValue;
    long long val1, val2, val3;
    for(int i=0; i<n; i++){
        cin>>currentValue;
        MaxHeap.push(currentValue);
        if(MaxHeap.size()<3){
            cout<<-1<<endl;
            continue;
        }else{
            val1 = MaxHeap.top();
            MaxHeap.pop();
            val2 = MaxHeap.top();
            MaxHeap.pop();
            val3 = MaxHeap.top();
            MaxHeap.pop();

            MaxHeap.push(val1);
            MaxHeap.push(val2);
            MaxHeap.push(val3);

            cout<<val1 * val2 * val3<<endl;
        }
    }
}
