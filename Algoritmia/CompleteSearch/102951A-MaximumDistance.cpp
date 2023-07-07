#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> x_coordinates(n);
    vector<int> y_coordinates(n);
    for(int i=0;i<n;i++){
        cin>>x_coordinates[i];
    }

    for(int i=0;i<n;i++){
        cin>>y_coordinates[i];
    }

    int temp = 0;
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            temp = pow(x_coordinates[i] - x_coordinates[j],2) + pow(y_coordinates[i] - y_coordinates[j],2);
            ans = max(ans,temp);
        }
        
    }
    cout<<ans<<endl;
}