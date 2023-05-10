#include <bits/stdc++.h>

using namespace std;

int main(){
    multiset<int> set1;
    multiset<int> set2;
    multiset<int> set3;
    int ans1 = -1;
    int ans2 = -1;
    int n,aux; cin>>n;

    for(int i=0; i<n; i++){ 
        cin>>aux;
        set1.insert(aux);
    }
    for(int i=0; i<n-1; i++){
        cin>>aux;
        set2.insert(aux);
    }
    for(int i=0; i<n-2; i++){
        cin>>aux;
        set3.insert(aux);
    }

    auto it1 = set1.begin();
    auto it2 = set2.begin();
    auto it3 = set3.begin();

    while(it2 != set2.end()){
        if(*it1 != *it2){
            ans1 = *it1;
            break;
        }
        it1++;
        it2++;
    }

    if(ans1 == -1){
        ans1 = *it1;
    }
    it2 = set2.begin();
    while(it3 != set3.end()){
        if(*it2 != *it3){
            ans2 = *it2;
            break;
        }
        it2++;
        it3++;
    }
    if(ans2 == -1){
        ans2 = *it2;
    }    
    cout<<ans1<<endl;
    cout<<ans2<<endl;
}