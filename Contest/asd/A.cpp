#include <iostream>
#include<string>
using namespace std;

void solution(){
    string My_code = "codeforces";
    string s;
    cin>>s;
    int contador = 0;
    for (int j = 0; j < My_code.size(); j++){
        if (My_code[j]!=s[j]){
            contador=contador+1;
        }
    }
    cout<<contador<<endl;
}

 int main (){
    int t;
    cin >> t;
    while(t--){
        solution();
    }
}
