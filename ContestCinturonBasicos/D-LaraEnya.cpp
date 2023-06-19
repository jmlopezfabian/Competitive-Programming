#include <bits/stdc++.h>

using namespace std;

int main(){
    int lara, enya;
    cin>>lara>>enya;
    set<string> lara_set;
    set<string> enya_set;
    string problem;
    for(int i=0; i<lara; i++){
        cin>>problem;
        lara_set.insert(problem);
    }
    for(int i=0; i<enya; i++){
        cin>>problem;
        enya_set.insert(problem);
    }

    //for(auto it: lara_set){
    //    cout<<it<<endl;
    //}
    //cout<<"\n";
    //for(auto it: enya_set){
    //    cout<<it;
    //}

    auto it = lara_set.begin();
    for(int i=0;i<min(enya,lara); i++){
        string problem = *it;
        if(enya_set.find(problem) != enya_set.end()){
            enya_set.erase(it);
        }
        it++;
    }
    if(lara_set.size() > enya_set.size()){
        cout<<"YES"<<endl;
    }else{
        cout<<endl;
    }
}