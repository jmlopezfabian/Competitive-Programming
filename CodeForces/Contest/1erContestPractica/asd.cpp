#include <bits/stdc++.h>

using namespace std;

void solution(){
    string s;
    cin>>s;

    int i=0,j=0;
    int a,b;
    //while(j<s.length()){
    //    a = s[i] - '0';
    //    b = s[j] - '0';
    //    if((a>b) && (a%2 != b%2)){
    //        swap(s[i],s[j]);
    //    }
    //    i++;
    //    j++;
    //}
    //cout<<s<<endl;

    vector<int> odd,even,number;
    int n = s.length(), aux;
    for(int i=0; i<n; i++){
        aux = s[i] - '0';
        if(aux%2 == 0){
            odd.push_back(aux);
        }else{
            even.push_back(aux);
        }
    }

    while(i<even.size() || j<odd.size()){
        if(i<even.size() && j<odd.size()){
            if(even[i] <= odd[j]){
                number.push_back(even[i]);
                i++;
            }else{
                number.push_back(odd[j]);
                j++;
            }
        }
        else if(i<even.size()){
            number.push_back(even[i]);
            i++;
        }else{
            number.push_back(odd[j]);
            j++;
        }
    }
    
}