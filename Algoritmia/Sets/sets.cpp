#include <bits/stdc++.h>

using namespace std;

int main(){
    multiset<int> set1 = {1,2,3,4,5};

    if(set1.find(6) == set1.end()){
        cout<<"NO esta";
    }else{
        cout<<"Si esta";
    }

    cout<<*set1.find(6)<<endl;
    cout<<*set1.end();
    
}