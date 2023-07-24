//https://cses.fi/problemset/task/1623

#include <bits/stdc++.h>

using namespace std;

//void completeSearchCombinaciones(vector<int> &apples, vector<int> current){
//    if(current.size() == 5){
//        return;
//    }
//    for(auto it : apples){
//        current.push_back(it);
//        completeSearch(apples,current);
//        current.pop_back();
//    }
//}
long long completeSearch(vector<long long> &apples, vector<int> current, int it, long long totalW){
    
    if(it == apples.size()){
        long long aux = 0;
        for(int i=0; i<current.size();i++){
            aux += current[i];
            //cout<<current[i]<<" ";
        }
        //cout<<"-- "<<abs(aux - (totalW - aux))<<endl;
        return abs(aux - (totalW - aux));
    }
    long long ans1 = completeSearch(apples,current, it + 1, totalW);
    current.push_back(apples[it]);
    long long ans2 = completeSearch(apples,current, it + 1, totalW);
    current.pop_back();
    return min(ans1, ans2);
}

int main(){
    int n; cin>>n;
    vector<long long> apples(n);
    vector<int> current;
    long long totalW = 0;
    for(int i=0; i<n; i++){
        cin>>apples[i];
        totalW += apples[i];
    }

    cout<<completeSearch(apples, current, 0, totalW)<<endl;;
}