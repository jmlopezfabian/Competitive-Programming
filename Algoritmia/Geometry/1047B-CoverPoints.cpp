#include <bits/stdc++.h>

using namespace std;

int distanceManhattan(pair<int,int> coordinate){
    return coordinate.first + coordinate.second;
}

int main(){
    int n; cin>>n;
    vector<pair<int,int>> coordinates;
    map<int,int> distances;
    pair<int,int> coordinate;
    for(int i=0; i<n; i++){
        cin>>coordinate.first;
        cin>>coordinate.second;
        coordinates.push_back(coordinate);

        distances[distanceManhattan(coordinate)] = i; 
    }
    
    cout<<distances.rbegin()->first<<endl;
}