#include <bits/stdc++.h>
#include <iomanip> 
using namespace std;

int main(){
    int n,l; cin>>n>>l;
    vector<double> lanters_pos(n);
    vector<double> distances;
    for(int i=0;i<n;i++){
        cin>>lanters_pos[i];
    }

    sort(lanters_pos.begin(), lanters_pos.end());
    //double ans = FLT_MIN;
    int i=0;

    if(lanters_pos[0] != 0){
        distances.push_back(lanters_pos[0]);
        //ans = lanters_pos[0];
    }
    if(lanters_pos[n-1] != l){
        distances.push_back(l - lanters_pos[n-1]);
        //ans = l - lanters_pos[n-1];
    }
    for(int i = 0;i+1<n;i++){
        double current = abs(lanters_pos[i] - lanters_pos[i+1])/2;
        distances.push_back(current);
        //ans = max(current,ans);
    }
    sort(distances.begin(),distances.end());

    cout << fixed << setprecision(10) <<distances[distances.size()-1]<< endl;
}