#include <bits/stdc++.h>

using namespace std;

void solution(){
    vector<int> vowel_idx;
    int n; cin>>n;
    vector<char> str(n);

    for(int i=0; i<n; i++){
        cin>>str[i];
        if(str[i] == 'a' || str[i] == 'e'){
            vowel_idx.push_back(i);
        }
    }
    
    string nuevo = ""; 
    int j=0;
    for(int i=0; i<n; i++){
        nuevo += str[i];
        if(i == vowel_idx[j] && j < size(vowel_idx)-1){
            int resta = vowel_idx[j+1] - vowel_idx[j];
            if(resta == 2){
                nuevo += '.';
            }else if(resta == 3){
                nuevo += str[i+1];
                nuevo += '.';
                i++;
            }
            j++;
        }
        
    }
    cout<<nuevo<<endl;

}

int main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}